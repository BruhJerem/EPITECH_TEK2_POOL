/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "PapaXmasTable.hpp"

/*
** Constructor
*/
PapaXmasTable::PapaXmasTable()
{
	this->size = 2;
	this->currentNumberObject = 0;
	this->objectArray = new Object*[size];
	for (int i = 0; i < size; i++) {
		this->objectArray[i] = NULL;
	}
	this->objectArray[size+1] = NULL;
}

/*
** Destructor
*/
PapaXmasTable::~PapaXmasTable()
{

}

/*
** Constructor Copy
*/
PapaXmasTable::PapaXmasTable(PapaXmasTable &table)
{
	this->size = table.size;
	this->currentNumberObject = table.currentNumberObject;
	this->objectArray = new Object*[size];
	for (int i = 0; i < size; i++) {
		this->objectArray[i] = table.objectArray[i];
	}
	this->objectArray[size+1] = NULL;
}

ITable *PapaXmasTable::createTable() const
{
	return new PapaXmasTable;
}

int PapaXmasTable::addObjectToTable(Object *object)
{
	if (object) {
		if (this->currentNumberObject > 10) {
			std::cout << "Santa Table can only contain "
				"2 Objects\n";
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

Object **PapaXmasTable::getObjectArray()const
{
	return this->objectArray;
}

int PapaXmasTable::getSize() const
{
	return this->size;
}

int PapaXmasTable::getCurrentNumberObject() const {
	return this->currentNumberObject;
}
