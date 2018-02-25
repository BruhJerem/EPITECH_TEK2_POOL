//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14m
// File description:
//
//

#ifndef CPP_D14M_FRUIT_HPP
#define CPP_D14M_FRUIT_HPP

#include <iostream>

class Fruit
{
protected:
    std::string _name;
    int _vitamins;
public:
    Fruit();
    std::string getName()const;
    int getVitamins()const;

};


#endif //CPP_D14M_FRUIT_HPP
