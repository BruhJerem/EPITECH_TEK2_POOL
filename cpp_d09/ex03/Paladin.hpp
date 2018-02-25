//
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_PALADIN_HPP
#define CPP_D09_PALADIN_HPP

#include "Warrior.hpp"
#include "Priest.hpp"
#include "Mage.hpp"
#include <iostream>

class Paladin : public Warrior, public Priest{
public:
    Paladin(const std::string &name, int level, const std::string &weapon="hammer");
    using Warrior::CloseAttack;
    using Warrior::RestorePower;
    using Priest::Heal;
    using Priest::RangeAttack;
    int Intercept();
};


#endif //CPP_D09_PALADIN_HPP
