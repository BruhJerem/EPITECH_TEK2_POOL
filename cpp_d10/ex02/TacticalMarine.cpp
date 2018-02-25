//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "TacticalMarine.hpp"
#include <iostream>

/* Constructor */

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle\n";
}

/* Destructor */

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ...\n";
}

/* Functions from Interface */

ISpaceMarine *TacticalMarine::clone() {
	return nullptr;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *\n";
}
