//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_WARRIOR_HPP
#define CPP_D09_WARRIOR_HPP

#include "Character.hpp"

class Warrior : public virtual Character
{
protected:
    const std::string weaponName;
public:
    Warrior(const std::string &name, int level, std::string weapon="hammer");
    int CloseAttack();
    int RangeAttack();
    std::string getWeaponName()const;
};


#endif //CPP_D09_WARRIOR_HPP
