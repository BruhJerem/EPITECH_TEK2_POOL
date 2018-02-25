//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#include <iostream>
#include "Borg.hpp"

Borg::Ship::Ship()
{
	this->_maxWarp = 9;
	this->_size = 300;

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