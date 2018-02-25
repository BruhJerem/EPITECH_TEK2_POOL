//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include "Hunter.hpp"
#include "Character.hpp"

Hunter::Hunter(const std::string &name, int level, const std::string &weapon) :
	Character(name, level), Warrior(name, level, weapon)
{
	this->_class = "Hunter";
	this->_race = "Elf";
	this->_strength = 9;
	this->_stamina = 9;
	this->_inteligence = 5;
	this->_spirit = 6;
	this->_agility = 25;
	std::cout << this->_name <<" is born from a tree\n";
}

int Hunter::RangeAttack()
{
	if (checkEnergy(25, this->_power, this->_name)) {
		std::cout << this->_name << " uses his bow\n";
		return this->_agility + 20;
	}
	return 0;
}

void Hunter::RestorePower()
{
	this->_power = 100;
	std::cout << this->_name << " meditates\n";
}