//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include <iostream>
#include "Victim.hpp"

/* Operator */

std::ostream &operator<<(std::ostream &s, const Victim &victim)
{
	s << "I'm " << victim.getName()
	  << " and i like otters!\n";
	  return s;
}

/* Constructor and Destructor */

Victim::Victim(const std::string name) : _name(name)
{
	std::cout << "Some random victim called "
		  << this->_name<< " just popped!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name
		  << " just died for no apparent reason!\n";
}

/* Polymorph Functions */

void Victim::getPolymorphed() const
{
	std::cout << this->_name
		  << " has been turned into a cute little sheep!\n";
}

/* Get functions */

const std::string Victim::getName() const
{
	return this->_name;
}