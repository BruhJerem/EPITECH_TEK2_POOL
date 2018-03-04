/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_TEDDY_HPP
#define CPP_RUSH2_TEDDY_HPP

#include "Toy.hpp"

class Teddy : public Toy
{
private:
	bool _taken;
public:
	Teddy(std::string title);
	~Teddy();
	bool isTaken();
};

#endif //CPP_RUSH2_TEDDY_HPP
