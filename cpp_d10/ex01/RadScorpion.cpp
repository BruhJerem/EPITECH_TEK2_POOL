//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, const std::string &type)
	: AEnemy(hp, type)
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}
