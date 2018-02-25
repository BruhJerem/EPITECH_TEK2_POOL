//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_ISQUAD_HPP
#define CPP_D10_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class  ISquad
{
public:
    virtual ~ISquad () {}
    virtual  int  getCount ()  const = 0;
    virtual  ISpaceMarine* getUnit(int) = 0;
    virtual  int  push(ISpaceMarine *) = 0;
};

#endif //CPP_D10_ISQUAD_HPP
