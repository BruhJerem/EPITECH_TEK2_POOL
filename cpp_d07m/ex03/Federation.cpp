//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#include <iostream>
#include "Federation.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"

/* Ensign Class Handling */

Federation::Starfleet::Ensign::Ensign(const std::string name)
{
	this->_name = name;
	std::cout<<"Ensign "<< this->_name << ", awaiting orders.\n";
}

/* Captain Class Handling */

Federation::Starfleet::Captain::Captain(std::string name)
{
	this->_name = name;
}

std::string Federation::Starfleet::Captain::getName()
{
	return (this->_name);
}

int Federation::Starfleet::Captain::getAge()
{
	return (this->_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
	this->_age = age;
}

WarpSystem::Core* Federation::Starfleet::Ship::getCore()
{
	return (this->core);
}

/* Federation Independant */

/* Set location to d */

WarpSystem::Core* Federation::Ship::getCore()
{
	return (this->core);
}

bool Federation::Ship::move(int warp, Destination d)
{
	if (warp <= this->_maxWarp && d != this->_location &&
		this->core->checkReactor()->isStable()) {
		this->_location = d;
		return (true);
	}
	return (false);
}

/* Set location to home */

bool Federation::Ship::move(int warp)
{
	if (warp <= this->_maxWarp  &&
		this->core->checkReactor()->isStable()) {
		this->_location = this->_home;
		return (true);
	}
	return (false);
}

/* Federation Indepedant Destination to d */

bool Federation::Ship::move(Destination d)
{
	if (d != this->_location &&
		this->core->checkReactor()->isStable()) {
		this->_location = d;
		return (true);
	}
	return (false);
}

/* Federation Independant to Home */

bool Federation::Ship::move()
{
	if (this->_home != this->_location &&
		this->core->checkReactor()->isStable()) {
		this->_location = this->_home;
		return (true);
	}
	return (false);
}

Federation::Ship::Ship(int length, int width, std:: string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_home = VULCAN;
	this->_location = this->_home;
	this->_photonTorpedo = 20;
	this->_shield = 100;

	std::cout<<"The independant ship "<<name <<" just finished its construction.It is "<<name<<" has been finished. It is "
		 <<length<<" m in length and " << width <<"m in width.\n";
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
	std::cout<<this->_name<<": The core is set.\n";
	this->core = core;
	core->checkReactor()->setStability(true);
}

void Federation::Ship::checkCore()
{
	std::string s;

	if (this->core->checkReactor()->isStable())
		s = "stable";
	else
		s = "unstable";
	std::cout<<this->_name<<": The core is "<<s<<" at the time.\n";
}

/* Federation Startfleet */

/* Set location to d */

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
	if (warp <= this->_maxWarp && d != this->_location &&
		this->core->checkReactor()->isStable()) {
		this->_location = d;
		return (true);
	}
	return (false);
}

/* Set location to Home */

bool Federation::Starfleet::Ship::move(int warp)
{
	if (warp <= this->_maxWarp &&
		this->core->checkReactor()->isStable()) {
		this->_location = this->_home;
		return (true);
	}
	return (false);
}

/* Set location to d */

bool Federation::Starfleet::Ship::move(Destination d)
{
	if (d != this->_location &&
		this->core->checkReactor()->isStable()) {
		this->_location = d;
		return (true);
	}
	return (false);
}

/* Federation Startfleet moove Home */

bool Federation::Starfleet::Ship::move()
{
	if (this->_home != this->_location &&
		this->core->checkReactor()->isStable()) {
		this->_location = this->_home;
		return (true);
	}
	return (false);
}

Federation::Starfleet::Ship::Ship()
{
	this->_length = 289;
	this->_width = 132;
	this->_name = "Enterprise";
	this->_maxWarp = 6;
	this->_home = EARTH;
	this->_location = this->_home;
	this->_photonTorpedo = 20;
	this->_shield = 100;

	std::cout<<"The ship USS "<<this->_name<<" has been finished. It is "
		 <<this->_length<<" m in length and " << this->_width <<"m in width."
			 "It can go to Warp "<<this->_maxWarp<<"!! Weapons are set: "
		<< this->_photonTorpedo << " torpedos ready.\n";
}

Federation::Starfleet::Ship::Ship(int length, int width,
				  std:: string name, short maxWarp, int torpedo)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;
	this->_home = EARTH;
	this->_location = this->_home;
	this->_photonTorpedo = torpedo;
	this->_shield = 100;

	std::cout<<"The ship USS "<<name<<" has been finished. It is "
		 <<length<<" m in length and " << width <<"m in width."
		"It can go to Warp "<<maxWarp<<"! Weapons are set: "
		 << this->_photonTorpedo << " torpedos ready.\n";
}

int Federation::Starfleet::Ship::getShield()
{
	return (this->_shield);
}

void Federation::Starfleet::Ship::setShield(int shield)
{
	this->_shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
	return (this->_photonTorpedo);
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
	this->_photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
	std::cout<<"USS "<<this->_name<<": The core is set.\n";
	this->core = core;
	core->checkReactor()->setStability(true);
}

void Federation::Starfleet::Ship::checkCore()
{
	std::string s;

	if (this->core->checkReactor()->isStable())
		s = "stable";
	else
		s = "unstable";
	std::cout<<"USS "<<this->_name<<": The core is "<<s<<" at the time.\n";
}

void Federation::Starfleet::Ship::promote(Captain *captain)
{
	this->captain = captain;
	std::cout<<this->captain->getName()
		 <<": I'm glad to be the captain of the USS "<< this->_name<<".\n";
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
	if (this->_photonTorpedo == 0) {
		std::cout << this->_name<<": No more torpedo to fire, "
			  << this->captain->getName() << "!\n";
	} else {
		this->_photonTorpedo -= 1;
		std::cout << this->_name << ": Firing on target. "
			  << this->_photonTorpedo << " torpedoes remaining.\n";
		target->setShield(target->getShield() - 50);
	}
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
	if (this->_photonTorpedo == 0) {
		std::cout << this->_name<<": No more torpedo to fire, "
			  << this->captain->getName() << "!\n";
	} else {
		int torp = this->_photonTorpedo - torpedoes;
		if (torp < 0) {
		std::cout << this->_name<<": No enough torpedoes to fire, "
			  << this->captain->getName() <<"!\n";
		} else {
			this->_photonTorpedo -= torpedoes;
			std::cout << this->_name << ": Firing on target. "
				  << this->_photonTorpedo << " torpedoes remaining.\n";
			target->setShield(target->getShield() - 50);
		}
	}
}