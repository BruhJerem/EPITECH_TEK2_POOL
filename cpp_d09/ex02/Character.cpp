//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#include "Character.hpp"
#include <iostream>

bool Character::checkEnergy(int cost, int currEnergy, std::string name)
{
	if (cost > currEnergy) {
		std::cout<< name << " out of power\n";
		return false;
	}
	this->_power -= cost;
	return true;
}

void Character::TakeDamage(int damage)
{
	this->_pv -= damage;
	if (this->_pv <= 0)
		std::cout << this->_name << " out of combat\n";
	else
		std::cout << this->_name << " takes "
			  << damage << " damage\n";
}

void Character::RestorePower()
{
	this->_power = 100;
	std::cout << this->_name << " eats\n";
}

int Character::RangeAttack()
{
	if (checkEnergy(10, this->_power, this->_name)) {
		std::cout << this->_name << " tosses a stone\n";
		return 5 + this->_strength;
	}
	return 0;
}

void Character::Heal()
{
	this->_pv += 50;
	std::cout << this->_name << " takes a potion\n";
}

int Character::CloseAttack()
{
	if (checkEnergy(10, this->_power, this->_name)) {
		std::cout << this->_name
			  << " strikes with a wooden stick\n";
		return 10 + this->_strength;
	}
	return 0;
}

Character::Character(const std::string name, int level)
{
	this->_name = name;
	this->_level = level;
	this->_pv = 100;
	this->_power = 100;

	this->_agility = 5;
	this->_inteligence = 5;
	this->_spirit = 5;
	this->_stamina = 5;
	this->_strength = 5;
	this->_class = "Character";
	this->Range = CLOSE;
	std::cout << this->_name << " Created\n";
}

const std:: string& Character::getName() const
{
	return this->_name;
}

int Character::getLvl() const
{
	return this->_level;
}

int Character::getPower() const
{
	return this->_power;
}

int Character::getPv() const
{
	return this->_pv;
}

int Character::getAgility() const
{
	return this->_agility;
}

int Character::getIntelligence() const
{
	return this->_inteligence;
}

int Character::getSpirit() const
{
	return this->_spirit;
}

int Character::getStamina() const
{
	return this->_stamina;
}

int Character::getStrength() const
{
	return this->_strength;
}