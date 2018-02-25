//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#include <iostream>
#include "Parts.hpp"

/* Constructor */

Arms::Arms(std::string serial, bool functional)
{
	this->_name = "Arms";
	this->_serial = serial;
	this->_functional = functional;
}

Legs::Legs(std::string serial, bool functional)
{
	this->_name = "Legs";
	this->_serial = serial;
	this->_functional = functional;
}

Head::Head(std::string serial, bool functional)
{
	this->_name = "Head";
	this->_serial = serial;
	this->_functional = functional;
}

/* Is Functional */

bool Arms::isFunctionnal()
{
	return (this->_functional);
}

bool Legs::isFunctionnal()
{
	return (this->_functional);
}

bool Head::isFunctionnal()
{
	return (this->_functional);
}

/* Serial */

std::string Arms::serial()
{
	return (this->_serial);
}

std::string Legs::serial()
{
	return (this->_serial);
}

std::string Head::serial()
{
	return (this->_serial);
}

/* Information */

void Arms::informations()
{
	std::string isFunctionalStr;
	if (this->_functional)
		isFunctionalStr = "OK";
			else
		isFunctionalStr = "KO";
	std::cout << "[Parts] "<< this->_name << " " << this->_serial
	<< " status : " << isFunctionalStr << std::endl;
}

void Legs::informations()
{
	std::string isFunctionalStr;
	if (this->_functional)
		isFunctionalStr = "OK";
	else
		isFunctionalStr = "KO";
	std::cout << "[Parts] "<< this->_name << " " << this->_serial
		  << " status : " << isFunctionalStr << std::endl;
}

void Head::informations()
{
	std::string isFunctionalStr;
	if (this->_functional)
		isFunctionalStr = "OK";
	else
		isFunctionalStr = "KO";
	std::cout << "[Parts] "<< this->_name << " " << this->_serial
		  << " status : " << isFunctionalStr << std::endl;
}