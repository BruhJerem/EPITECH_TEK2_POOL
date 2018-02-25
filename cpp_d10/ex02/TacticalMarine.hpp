//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_TACTICALMARINE_HPP
#define CPP_D10_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine();


    ~TacticalMarine();

    ISpaceMarine* clone();
    void battleCry()const;
    void rangedAttack ()const;
    void meleeAttack()const;
};


#endif //CPP_D10_TACTICALMARINE_HPP
