/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <typeinfo>
#include "Object.hpp"

Object::Object()
{

}

Object::~Object()
{

}

bool Object::isTaken()
{
	return this->_taken;
}

void Object::setTaken(bool status)
{
	this->_taken = status;
}

std::string Object::getClassName()
{
	return (typeid(*this).name() + 1);
}
