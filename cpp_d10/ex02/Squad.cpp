//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

/* Operator */

Squad &Squad::operator=(const Squad &squad)
{
	this->_count = squad._count;
	this->_size = squad._size;
	for (int i = 0; i < this->_size; i++) {
		if (squad.unit[i])
			this->unit[i] = squad.unit[i]->clone();
		else
			this->unit[i] = NULL;
	}
	return *this;
}


/* Constructor of Squad */

Squad::Squad()
{
	this->_count = 0;
	this->_size = 10;
	this->unit = new ISpaceMarine*[_size];
	for (int i = 0; i < this->_size; i++) {
		this->unit[i] = NULL;
	}
}

Squad::Squad(const Squad &squad)
{
	for (int i = 0; i < this->_size; i++) {
		delete this->unit[i];
	}
	delete[](this->unit);
	this->_count = squad._count;
	this->_size = squad._size;
	for (int i = 0; i < this->_size; i++) {
		if (squad.unit[i])
			this->unit[i] = squad.unit[i]->clone();
		else
			this->unit[i] = NULL;
	}
}

/* Destructor of Squad */

Squad::~Squad()
{
	for (int i = 0; i < this->_count; i++) {
		delete (this->unit[i]);
	}
}

/* Get Count */

int Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine *Squad::getUnit(int unit)
{
	if (unit > this->_size || unit < 0) {
		return NULL;
	}
	return this->unit[unit];
}

/* Resize for Push */

void Squad::resize()
{
	int new_size = this->_size * 2;
	ISpaceMarine **new_array = new ISpaceMarine*[new_size];
	int i;
	for (i = 0; i < this->_size; i++) {
		new_array[i] = this->unit[i];
	}
	while (i < new_size) {
		new_array[i++] = NULL;
	}
	delete[](this->unit);
	this->unit = new_array;
	this->_size = new_size;
}

int Squad::push(ISpaceMarine *marine)
{
	if (marine) {
		if (this->_count >= this->_size) {
			this->resize();
		}
		for (int i = 0; i < _count; i++) {
			if (this->unit[i] == marine) {
				return _count;
			}
		}
		this->unit[_count++] = marine;
	}
	return this->_count;
}