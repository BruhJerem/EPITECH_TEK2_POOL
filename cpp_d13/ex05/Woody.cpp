//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#include "Woody.hpp"
#include "Toy.hpp"

Woody::Woody(const char *name, const char *filename)
	: Toy(WOODY, name, filename)
{

}

void Woody::speak(std::string statement) const
{
	std::cout << "WOODY: ";
	std::cout << this->_name << " \"" << statement << "\"\n";
}