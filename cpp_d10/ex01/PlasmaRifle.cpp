//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(const std::string &name, int apcost, int damage)
	: AWeapon(name, apcost, damage)
{

}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}

PlasmaRifle::~PlasmaRifle()
{

}

