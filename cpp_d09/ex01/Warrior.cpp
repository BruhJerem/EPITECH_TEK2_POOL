//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include "Warrior.hpp"
#include "Character.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string weapon) :
Character(name, level), weaponName(weapon)
{
	this->_class = "Warrior";
	this->_race = "Dwarf";
	this->_strength = 12;
	this->_stamina = 12;
	this->_inteligence = 6;
	this->_agility = 7;
	std::cout << "I'm "<<this->_name
		  << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\n";
}


int Warrior::RangeAttack()
{
	if (checkEnergy(10, this->_power, this->_name)) {
		std::cout << this->_name << " intercepts\n";
		this->Range = Warrior::CLOSE;
	}
	return 0;
}

int Warrior::CloseAttack() {
	if (checkEnergy(30, this->_power, this->_name)) {
		std::cout << this->_name
			  << " strikes with his "
			  << this->weaponName << std::endl;
		return 20 + this->_strength;
	}
	return 0;
}

std::string Warrior::getWeaponName() const
{
	return this->weaponName;
}