//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "Character.hpp"
#include "AEnemy.hpp"

Character::Character(const std::string &name)
	: _name(name)
{
	this->_ap = 40;
}

Character::~Character()
{

}

void Character::recoverAP()
{
	if (this->_ap + 10 <= 40) {
		this->_ap += 10;
	}
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
	if (this->_weapon != nullptr
	    && this->_weapon->getAPCost() <= this->_ap) {
		std::cout << this->_name
			  << " attacks "
			  << enemy->getType()
			  << " with a "
			  << this->_weapon->getName()
			  << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_ap -= _weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

const std::string Character::getName() const
{
	return this->_name;
}

AWeapon *Character::getWeaponPointer() const
{
	return this->_weapon;
}

int Character::getAp() const {
	return this->_ap;
}

std::ostream &operator<<(std::ostream &s, Character &character)
{
	if (character.getWeaponPointer() == nullptr) {
		s << character.getName()
		  << " has " << character.getAp() << " AP and is unarmed\n";
	} else {
		s << character.getName()
		  << " has " << character.getAp()
		  << " AP and wields a "
		  << character.getWeaponPointer()->getName()
			<< "\n";
	}
	return s;
}
