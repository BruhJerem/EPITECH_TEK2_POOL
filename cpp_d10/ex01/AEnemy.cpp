//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#include "AEnemy.hpp"

/* Constructor and Destructor */

AEnemy::AEnemy(int hp, const std::string &type)
	:_type(type)
{
	this->_hp = hp;
}

AEnemy::~AEnemy()
{

}

/* Function Take Damage */

void AEnemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
}

/* Function get var */

const std::string &AEnemy::getType() const
{
	return this->_type;
}

int AEnemy::getHP() const
{
	return this->_hp;
}

