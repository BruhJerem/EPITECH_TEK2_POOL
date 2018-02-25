//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "Peon.hpp"
#include "Victim.hpp"

/* Peon Constructor and Destoyer */

Peon::Peon(const std::string name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name
		  << " has been turned into a pink pony!\n";
}