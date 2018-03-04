/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include "Object.hpp"
#include "Box.hpp"

Box::Box() : Wrap()
{

}

Box::~Box()
{

}

bool Box::isOpen() const
{
	return this->_open;
}

Object *Box::getObject() const
{
	return this->_object;
}

void Box::setOpen(bool status)
{
	this->_open = status;
}

void Box::wrapMeThat(Object *object)
{
	if (this->_open && this->_object == nullptr) {
		this->_object = object;
	}
}
