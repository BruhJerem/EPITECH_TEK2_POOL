/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "LittlePony.hpp"

LittlePony::LittlePony(std::string title) : Toy(title)
{

}

LittlePony::~LittlePony()
{

}

bool LittlePony::isTaken()
{
	std::cout << "yo man" << std::endl;
	return this->_taken;
}
