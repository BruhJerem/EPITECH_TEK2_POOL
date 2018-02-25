//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#include "Buzz.hpp"
#include "Toy.hpp"

Buzz::Buzz(const char *name, const char *filename)
	: Toy(BUZZ, name, filename)
{
}

bool Buzz::speak(const std::string statement)
{
	std::cout << "BUZZ: ";
	std::cout << this->_name << " \"" << statement << "\"\n";
	return true;
}

bool Buzz::speak_es(const std::string statement)
{
	std::cout << "BUZZ: ";
	std::cout << this->_name << " senorita \""
		  << statement << "\" senorita\n";
	return true;
}