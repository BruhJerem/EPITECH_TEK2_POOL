//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "AWeapon.hpp"

/* Constructor and Destructor */

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
	: _name(name)
{
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon()
{

}

const std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}