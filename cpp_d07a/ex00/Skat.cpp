//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#include <iostream>
#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
	this->_name = name;
	this->_stimPacks = stimPaks;
}

Skat::~Skat()
{

}

int &Skat::stimPaks()
{
	return (this->_stimPacks);
}

const std::string& Skat::name()
{
	return ((const std::string&)this->_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
	if (number <= this->_stimPacks) {
		stock += number;
		this->_stimPacks -= number;
		std::cout << "Keep the change." << std::endl;
	} else {
		std::cout << "Don’t be greedy" << std::endl;
	}
}

void Skat::addStimPaks(unsigned int number)
{
	if (!this->_stimPacks) {
		std::cout << "Hey boya, did you forget something ?" << std::endl;
	}
	this->_stimPacks += number;
}

void Skat::useStimPaks()
{
	if (this->_stimPacks > 0) {
		this->_stimPacks--;
		std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
	}
	else {
		std::cout << "Mediiiiiic" << std::endl;
	}
}

void Skat::status()
{
	std::cout << "Soldier "<< this->_name << " reporting "
		<< this->_stimPacks <<" stimpaks remaining sir!\n";
}