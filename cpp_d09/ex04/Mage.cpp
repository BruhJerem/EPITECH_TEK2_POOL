//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
	this->_class = "Mage";
	this->_race = "Gnome";
	this->_strength = 6;
	this->_stamina = 6;
	this->_inteligence = 12;
	this->_spirit = 11;
	this->_agility = 7;
	std::cout << this->_name << " teleported\n";
}

int Mage::CloseAttack()
{
	if (checkEnergy(10, this->_power, this->_name)) {
		std::cout << this->_name<< " blinks\n";
		this->Range = Mage::RANGE;
	}
	return 0;
}

int Mage::RangeAttack()
{
	if (checkEnergy(25, this->_power, this->_name)) {
		std::cout << this->_name << " launches a fire ball\n";
		return 20 + this->_spirit;
	}
	return 0;
}

void Mage::RestorePower()
{
	this->_power += 50 + this->_inteligence;
	std::cout << this->_name << " takes a man potion\n";
}