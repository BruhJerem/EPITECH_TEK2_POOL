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
	this->_error = Error();
}

Toy::Toy()
{
	this->_type = BASIC_TOY;
	this->_name = "toy";
	this->_picture = Picture();
}

Toy::ToyType Toy::getType()
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

bool Toy::setAscii(const std::string &data)
{
	this->_picture = Picture(data);
	if (this->_picture.data == "ERROR") {
		this->_error.setType(Error::PICTURE);
		return false;
	}
	return true;
}

std::string Toy::getAscii() const
{
	return _picture.data;
}

Toy &Toy::operator=(const Toy &toy)
{
	this->_name = toy._name;
	this->_type = toy._type;
	this->_picture = toy._picture;
	return *this;
}

bool Toy::speak(const std::string statement)
{
	std::cout << this->_name << " \"" << statement << "\"\n";
	return true;
}

bool Toy::speak_es(const std::string statement)
{
	(void)statement;
	this->_error.setType(Error::SPEAK);
	return false;
}

Toy &Toy::operator<<(const std::string &data)
{
	this->setAsciiFromString(data);
	return *this;
}

void Toy::setAsciiFromString(const std::string &data)
{
	this->_picture.data = data;
}

/* Error Handling */

/* Constructor Error */

Toy::Error::Error()
{
	this->type = Toy::Error::UNKNOWN;
	this->_where = "";
	this->_what = "";
}

std::string Toy::Error::what()
{
	if (this->type == Toy::Error::PICTURE)
		this->_what = "bad new illustration";
	else if (this->type == Toy::Error::SPEAK)
		this->_what = "wrong mode";
	else
		this->_what = "";

	return this->_what;
}

std::string Toy::Error::where()
{
	if (this->type == Toy::Error::PICTURE)
		this->_where = "setAscii";
	else if (this->type == Toy::Error::SPEAK)
		this->_where = "speak_es";
	else
		this->_where = "";
	return this->_where;
}

void Toy::Error::setType(ErrorType type)
{
	this->type = type;
}

Toy::Error Toy::getLastError()
{
	return this->_error;
}

/* Print Ofstream */

std::ostream &operator<<(std::ostream &s, const Toy &toy)
{
	s << toy.getName();
	s << std::endl;
	s << toy.getAscii();
	s << std::endl;
	return s;
}
