/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "Wrap.hpp"

Wrap::Wrap() : Object()
{
	this->_object = nullptr;
	this->_open = false;
}

Wrap::~Wrap()
{

}

void Wrap::openMe()
{
	this->_open = true;
}

void Wrap::closeMe()
{
	this->_open = false;
}

void Wrap::take()
{
	std::cout << "whistles while working" << std::endl;
}


