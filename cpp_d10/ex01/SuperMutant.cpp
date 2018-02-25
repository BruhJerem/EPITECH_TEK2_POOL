//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, const std::string &type)
	: AEnemy(hp, type)
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

void SuperMutant::takeDamage(int damage) {
	AEnemy::takeDamage(damage-3);
}
