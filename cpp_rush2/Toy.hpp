/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_TOY_HPP
#define CPP_RUSH2_TOY_HPP

#include <iostream>
#include "Object.hpp"

class Toy : public Object
{
private:
	std::string &_title;

public:
	Toy(std::string title);
	~Toy();
	bool isTaken();
	std::string getTitle() const;
};

#endif //CPP_RUSH2_TOY_HPP
