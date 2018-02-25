//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_HUNTER_HPP
#define CPP_D09_HUNTER_HPP


#include "Warrior.hpp"

class Hunter : protected Warrior
{
public:
    Hunter(const std::string &name, int level, const std::string &weapon="sword");
    int RangeAttack();
    void RestorePower();
};


#endif //CPP_D09_HUNTER_HPP
