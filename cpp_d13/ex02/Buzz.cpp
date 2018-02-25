//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#include "Buzz.hpp"
#include "Toy.hpp"

Buzz::Buzz(const char* name, const char *filename)
	: Toy(BUZZ, name, filename)
{
	this->_name = name;
}