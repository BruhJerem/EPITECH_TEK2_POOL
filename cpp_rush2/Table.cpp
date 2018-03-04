/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "Table.hpp"

/* Constructor */
Table::Table()
{
	this->size = 10;
	this->currentNumberObject = 0;
	this->objectArray = new Object*[size];
	for (int i = 0; i < size; i++) {
		this->objectArray[i] = NULL;
	}
	this->objectArray[size+1] = NULL;
}

/* Copy Constructor */
Table::Table(Table &table)
{
	this->size = table.size;
	this->currentNumberObject = table.currentNumberObject;
	this->objectArray = new Object*[size];
	for (int i = 0; i < size; i++) {
		this->objectArray[i] = table.objectArray[i];
	}
	this->objectArray[size+1] = NULL;
}

/* Destructor */
Table::~Table()
{

}

ITable *Table::createTable() const
{
	return new Table;
}

int Table::addObjectToTable(Object *object)
{
	if (object) {
		if (this->currentNumberObject > 10) {
			std::cout << "Current Table can only contain "
				"10 Objects\n";
			return -1;
		}
		for (int i = 0; i < currentNumberObject; i++) {
			if (this->objectArray[i] == NULL) {
				this->objectArray[i] = object;
				return currentNumberObject;
			}
			if (this->objectArray[i] == object) {
				return currentNumberObject;
			}
		}
		this->objectArray[currentNumberObject++] = object;
	}
	return currentNumberObject;
}

Object **Table::getObjectArray()const
{
	return this->objectArray;
}

int Table::getCurrentNumberObject() const
{
	return this->currentNumberObject;
}

int Table::getSize() const
{
	return this->size;
}

void Table::removeToyAndWrap(Object *toy, Object *wrap)
{
	Object **newArray = new Object*[this->size];
	for (int i = 0; i < this->size; i++) {
		newArray[i] = NULL;
		if (this->objectArray[i] == toy) {
			i++;
		} else if (this->objectArray[i] == wrap) {
			i++;
		}
		newArray[i] = objectArray[i];
	}
	this->objectArray = newArray;
}
