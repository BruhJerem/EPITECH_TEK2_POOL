//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#include <iostream>
#include "Borg.hpp"
#include "Destination.hpp"
#include "WarpSystem.hpp"

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

Borg::Ship::Ship()
{
	this->_maxWarp = 9;
	this->_size = 300;
	this->_home = UNICOMPLEX;
	this->_location = this->_home;

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