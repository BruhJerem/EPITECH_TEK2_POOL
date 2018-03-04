/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "Toy.hpp"

Toy::Toy(std::string title) : Object(), _title(title)
{

}

Toy::~Toy()
{

}

bool Toy::isTaken()
{
	return this->_taken;
}

std::string Toy::getTitle() const
{
	return this->_title;
}