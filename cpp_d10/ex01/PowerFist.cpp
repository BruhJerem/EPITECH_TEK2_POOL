//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "PowerFist.hpp"

PowerFist::PowerFist(const std::string &name, int apcost, int damage)
	: AWeapon(name, apcost, damage)
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}

PowerFist::~PowerFist()
{

}
