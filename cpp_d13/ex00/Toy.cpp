//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#include "Toy.hpp"

Toy::Toy(const ToyType &type, const std::string &name, const std::string &file)
{
	this->_type = type;
	this->_name = name;
	this->_picture = Picture(file);
}

Toy::Toy()
{
	this->_type = BASIC_TOY;
	this->_name = "toy";
	this->_picture = Picture();
}

Toy::ToyType Toy::getType()const
{
	return _type;
}

std::string Toy::getName() const
{
	return _name;
}

void Toy::setName(const char *name)
{
	_name = name;
}

bool Toy::setAscii(const char *data)
{
	this->_picture = Picture(data);
	return !(this->_picture.data == "ERROR");
}

std::string Toy::getAscii() const
{
	return _picture.data;
}