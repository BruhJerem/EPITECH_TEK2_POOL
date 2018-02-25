//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_PRIEST_HPP
#define CPP_D09_PRIEST_HPP

#include "Character.hpp"
#include "Mage.hpp"

class Priest : public Mage
{

public:
    Priest(const std:: string &name , int level);
    void Heal();
    int CloseAttack();

};


#endif //CPP_D09_PRIEST_HPP
