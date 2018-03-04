/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_ICONVEYORBELT_HPP
#define CPP_RUSH2_ICONVEYORBELT_HPP

#include "ConveyorBelt.hpp"

class IConveyorBelt
{
public:
	~IConveyorBelt() {};
	virtual IConveyorBelt *createConveyorBelt() const = 0;

};

#endif //CPP_RUSH2_ICONVEYORBELT_HPP
