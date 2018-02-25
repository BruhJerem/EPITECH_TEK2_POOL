//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_MAGE_HPP
#define CPP_D09_MAGE_HPP

#include "Character.hpp"

class Mage : public virtual Character
{

public:
    Mage(const std:: string &name , int level);
    int CloseAttack();
    int RangeAttack();
    void RestorePower();
};


#endif //CPP_D09_MAGE_HPP
