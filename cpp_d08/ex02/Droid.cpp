//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d08
// File description:
//
//

#include <iostream>
#include "Droid.hpp"

/* Operator() */

bool Droid::operator()(const std::string *task, const std::size_t xp)
{
	if (this->_energy <= 10) {
		this->_status = new std::string("Battery Low");
		this->_energy = 0;
		return false;
	}
	this->_energy -= 10;
	if (this->BattleData->getExp() < xp) {
		this->BattleData->setExp(this->BattleData->getExp() + xp);
		this->_status = new std::string(*task + " - Failed!");
		return false;
	}
	this->BattleData->setExp(this->BattleData->getExp() + (xp/2));
	this->_status = new std::string(*task + " - Completed!");
	return true;
}

/* Operator == */

bool Droid::operator==(const Droid &other)const
{
	return *this->_status == *other._status;
}

/* Operator != */

bool Droid::operator!=(const Droid &other) const
{
	return *this->_status != *other._status;
}


/* Operator = */

void Droid::operator=(const Droid &other)
{
	this->_id = other._id;
	this->_energy = other._energy;
}

/* Operator << without class */

Droid &operator<<(Droid &droid, std::size_t &other)
{
	int diff = 100 - droid.getEnergy();

	if (droid.getEnergy() < 100 && other >= 100) {
		droid.setEnergy(droid.getEnergy() + diff);
		other -= diff;
	} else if (droid.getEnergy() < 100 && other < 100) {
		droid.setEnergy(droid.getEnergy() + other);
		other = 0;
	}
	return droid;
}

std::ostream &operator<<(std::ostream& s, const Droid& rhc)
{
	s << "Droid '"<<rhc.getId() << "', " << rhc.getStatus() << ", "
		 << rhc.getEnergy();
	return s;
}

/* Constructor Destructor */

Droid::Droid(const Droid &other)
{
	this->_id = other._id;
	this->_energy = 50;
	this->_status = other._status;
	this->BattleData = new DroidMemory();
	std::cout << "Droid '" << other.getId() <<"' Activated, Memory Dumped\n";
}

Droid::Droid(std::string serial)
{
	this->_id = serial;
	this->_energy = 50;
	this->_status = new std::string("Standing by");
	this->BattleData = new DroidMemory();
	std::cout << "Droid '" << this->_id <<"' Activated\n";
}

Droid::~Droid()
{
	//delete this->_ptr;
	std::cout << "Droid '" << this->_id <<"' Destroyed\n";
}

/* ID */

std::string Droid::getId() const
{
	return (this->_id);
}

void Droid::setId(std::string id)
{
	this->_id = id;
}

/* Energy */

std::size_t Droid::getEnergy() const
{
	return (this->_energy);
}

void Droid::setEnergy(size_t energy)
{
	this->_energy = energy;
}

/* Const variables Attack and Toughness */

std::size_t Droid::getAttack() const
{
	return (this->_attack);
}

std::size_t Droid::getToughness() const
{
	return (this->_toughness);
}

/* Status */

std::string Droid::getStatus() const
{
	return (*this->_status);
}

void Droid::setStatus(std::string *status)
{
	this->_status = status;
}

/* Battle Data */

DroidMemory* Droid::getBattleData()
{
	return this->BattleData;
}

void Droid::setBattleData(DroidMemory *BattleData)
{
	this->BattleData = BattleData;
}