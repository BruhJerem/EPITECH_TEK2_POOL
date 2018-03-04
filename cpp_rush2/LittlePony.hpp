/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_LITTLEPONY_HPP
#define CPP_RUSH2_LITTLEPONY_HPP

#include "Toy.hpp"

class LittlePony : public Toy
{
public:
	LittlePony(std::string title);
	~LittlePony();
	bool isTaken();
};

#endif //CPP_RUSH2_LITTLEPONY_HPP
