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

void Buzz::speak(std::string statement) const
{
	std::cout << "BUZZ: ";
	std::cout << this->_name << " \"" << statement << "\"\n";
}

bool Buzz::speak_es(std::string statement) const
{
	std::cout << "BUZZ: ";
	std::cout << this->_name << " senorita \""
		  << statement << "\" senorita\n";
	return true;
}