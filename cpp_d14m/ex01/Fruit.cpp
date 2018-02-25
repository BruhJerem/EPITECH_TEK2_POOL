//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14m
// File description:
//
//

#include "Fruit.hpp"

Fruit::Fruit()
{
}

std::string Fruit::getName()const
{
	return this->_name;
}

int Fruit::getVitamins()const
{
	return this->_vitamins;
}
