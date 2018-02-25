//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include "Priest.hpp"
#include "Character.hpp"
#include "Mage.hpp"
#include <iostream>

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
	this->_class = "Priest";
	this->_race = "Orc";
	this->_strength = 4;
	this->_stamina = 4;
	this->_inteligence = 42;
	this->_spirit = 21;
	this->_agility = 2;
	std::cout << this->_name << " enters in the order\n";
}

void Priest::Heal()
{
	if (checkEnergy(10, this->_power, this->_name)) {
		this->_pv += 70;
		std::cout << this->_name <<" casts a little heal spell\n";
	}
}

int Priest::CloseAttack()
{
	if (checkEnergy(10, this->_power, this->_name)) {
		std::cout << this->_name <<" uses a spirit explosion\n";
		this->Range = Priest::RANGE;
		return this->_spirit + 10;
	}
	return 0;
}
