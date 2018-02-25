//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "Sorcerer.hpp"

/* Operator */

std::ostream &operator<<(std::ostream &s, const Sorcerer &sorcerer)
{
	s << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
	  <<", and I like ponies!\n";
	return s;
}

/* Constructor and Destructor */

Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title
		  << ", is dead. Consequences will never be the same!\n";
}

/* Polymorph Functions */

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

/* Get Functions */

const std::string Sorcerer::getName()const
{
	return this->_name;
}

const std::string Sorcerer::getTitle()const
{
	return this->_title;
}