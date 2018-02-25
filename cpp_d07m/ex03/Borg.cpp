//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#include <iostream>
#include "Borg.hpp"
#include "Destination.hpp"
#include "Federation.hpp"
#include "WarpSystem.hpp"

int Borg::Ship::getShield()
{
	return (this->_shield);
}

void Borg::Ship::setShield(int shield)
{
	this->_shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
	return (this->_weaponFrequency);
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
	this->_weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
	return (this->_repair);
}

void Borg::Ship::setRepair(short repair)
{
	this->_repair = repair;
}

/* Set location to d */

bool Borg::Ship::move(int warp, Destination d)
{
	if (warp <= this->_maxWarp && d != this->_location &&
	    this->core->checkReactor()->isStable() == true) {
		this->_location = d;
		return (true);
	}
	return (false);
}

/* Set location to home */

bool Borg::Ship::move(int warp)
{
	if (warp <= this->_maxWarp &&
		this->core->checkReactor()->isStable() == true) {
		this->_location = this->_home;
		return (true);
	}
	return (false);
}

/* Set location to d */

bool Borg::Ship::move(Destination d)
{
	if (d != this->_location &&
		this->core->checkReactor()->isStable() == true) {
		this->_location = d;
		return (true);
	}
	return (false);
}

/* Set location to home */

bool Borg::Ship::move()
{
	if (this->_home != this->_location &&
		this->core->checkReactor()->isStable() == true) {
		this->_location = this->_home;
		return (true);
	}
	return (false);
}

/* Borg Ship Handling */

Borg::Ship::Ship(int frequency)
{
	this->_maxWarp = 9;
	this->_size = 300;
	this->_home = UNICOMPLEX;
	this->_location = this->_home;
	this->_weaponFrequency = frequency;
	this->_repair = 3;
	this->_shield = 100;

	std::cout<<"We are the Borgs. Lower your shields and surrender yourselves "
		"unconditionally.\nYour biological characteristics "
		"and technologies will be assimilated.\nResistance is futile.\n";
}

Borg::Ship::Ship(int frequency, short repair)
{
	this->_maxWarp = 9;
	this->_size = 300;
	this->_home = UNICOMPLEX;
	this->_location = this->_home;
	this->_weaponFrequency = frequency;
	this->_repair = repair;
	this->_shield = 100;

	std::cout<<"We are the Borgs. Lower your shields and surrender yourselves "
		"unconditionally.\nYour biological characteristics "
		"and technologies will be assimilated.\nResistance is futile.\n";
}


void Borg::Ship::setupCore(WarpSystem::Core *core)
{
	this->core = core;
	core->checkReactor()->setStability(true);
}

void Borg::Ship::checkCore()
{
	if (this->core->checkReactor()->isStable())
		std::cout<<"Everything is in order.\n";
	else
		std::cout<<"Critical failure imminent.\n";
}

void Borg::Ship::repair()
{
	if (this->_repair > 0) {
		this->_shield = 100;
		std::cout << "Begin shield re-initialisation... "
			"Done. Awaiting further instructions.\n";
	} else {
		this->_repair -= 1;
		std::cout<< "Energy cells depleted , shield weakening.\n";
	}
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
	target->setShield(this->_weaponFrequency*(-1));
	std::cout<<"Firing on target with "<<this->_weaponFrequency
		 <<"GW frequency.\n";
}

void Borg::Ship::fire(Federation::Ship *target)
{
	target->getCore()->getReactor()->setStability(true);
	std::cout<<"Firing on target with "<<this->_weaponFrequency
		 <<"GW frequency.\n";
}