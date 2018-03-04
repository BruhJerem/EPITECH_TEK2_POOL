/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "Teddy.hpp"

Teddy::Teddy(std::string title) : Toy(title)
{

}

Teddy::~Teddy()
{

}

bool Teddy::isTaken()
{
	std::cout << "gra hu" << std::endl;
	return this->_taken;
}