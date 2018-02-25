//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#include <iostream>
#include "KoalaBot.hpp"
#include "Parts.hpp"

KoalaBot::KoalaBot(std::string serial)
{
	this->_serial = serial;
}

void KoalaBot::setParts(Arms &arm)
{
	this->_arm = arm;
}

void KoalaBot::setParts(Legs &leg)
{
	this->_legs = leg;
}

void KoalaBot::setParts(Head &head)
{
	this->_head = head;
}

void KoalaBot::swapParts(Arms &arm)
{
	this->setParts(arm);
}

void KoalaBot::swapParts(Legs &leg)
{
	this->setParts(leg);
}

void KoalaBot::swapParts(Head &head)
{
	this->setParts(head);
}

void KoalaBot::informations()
{
	std::cout << "[KoalaBot] " << this->_serial << std::endl;
	this->_arm.informations();
	this->_legs.informations();
	this->_head.informations();
}

bool KoalaBot::status()
{
	if (this->_arm.isFunctionnal() && this->_legs.isFunctionnal()
	    && this->_head.isFunctionnal())
		return (true);
	return (false);
}