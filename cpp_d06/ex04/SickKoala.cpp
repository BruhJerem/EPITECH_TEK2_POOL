/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include <iostream>
#include <algorithm>
#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name) {
	this->name = name;
}

SickKoala::~SickKoala() {
	std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!\n";
}

void SickKoala::poke()
{
	std::cout << "Mr." << this->name << ": Gooeeeeerrk!! :'(\n";
}

bool SickKoala::takeDrug(std::string s)
{
	std::string originName = s;
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	if (s == "mars") {
		std::cout << "Mr."<<this->name<<": Mars, and it kreogs!\n";
		return (true);
	}
	if (originName == "Buronzand") {
		std::cout << "Mr."<<this->name<<": And you'll sleep right away!\n";
		return (true);
	}
	std::cout << "Mr." << this->name<<": Goerkreog!\n";
	return (false);
}

void SickKoala::overDrive(std::string s) {
	std::size_t found = s.find("Kreog");
	if (found != std::string::npos)
		s.replace(s.find("Kreog"), 5, "1337");
	found = s.rfind("Kreog");
	if (found != std::string::npos)
		s.replace(s.rfind("Kreog"), 5, "1337");

	std::cout << "Mr." << this->name << ": " << s << std::endl;
}

std::string SickKoala::getName()
{
	return this->name;
}