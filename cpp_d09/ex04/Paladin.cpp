//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include "Paladin.hpp"
#include "Warrior.hpp"
#include "Priest.hpp"

Paladin::Paladin(const std::string &name, int level, const std::string &weapon)
	: Character(name, level), Warrior(name, level, weapon), Priest(name, level)
{
	this->_class = "Paladin";
	this->_race = "Human";
	this->_strength = 9;
	this->_stamina = 10;
	this->_inteligence = 10;
	this->_spirit = 10;
	this->_agility = 2;
	std::cout << "the light falls on " <<this->_name << std::endl;
}

int Paladin::Intercept()
{
	return Warrior::RangeAttack();
}
