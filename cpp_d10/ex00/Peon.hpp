//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_PEON_HPP
#define CPP_D10_PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(const std::string name);
    ~Peon();

    virtual void getPolymorphed()const;
};


#endif //CPP_D10_PEON_HPP
