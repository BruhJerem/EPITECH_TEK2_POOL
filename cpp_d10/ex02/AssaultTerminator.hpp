//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_ASSAULTTERMINATOR_HPP
#define CPP_D10_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    AssaultTerminator();

    ~AssaultTerminator();

    ISpaceMarine* clone();
    void battleCry()const;
    void rangedAttack ()const;
    void meleeAttack()const;
};


#endif //CPP_D10_ASSAULTTERMINATOR_HPP
