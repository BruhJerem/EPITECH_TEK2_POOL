//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#include <iostream>
#include "Federation.hpp"

/* Federation Independant */

Federation::Ship::Ship(int length, int width, std:: string name)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;

	std::cout<<"The independant ship "<<name <<" just finished its construction. It is "
		 <<length<<" m in length and " << width <<" m in width.\n";
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

/*Federation Startfleet */

Federation::Starfleet::Ship::Ship(int length, int width,
				  std:: string name, short maxWarp)
{
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = maxWarp;

	std::cout<<"The ship USS "<<name<<" has been finished. It is "
		 <<length<<" m in length and " << width <<" m in width.\n"
		"It can go to Warp "<<maxWarp<<"!\n";
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