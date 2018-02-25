//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_SUPERMUTANT_HPP
#define CPP_D10_SUPERMUTANT_HPP

#include "AEnemy.hpp"

class SuperMutant : public AEnemy
{
public:
    SuperMutant(int hp=170, const std::string &type="Super Mutant");
    ~SuperMutant();

    void takeDamage(int damage);

};


#endif //CPP_D10_SUPERMUTANT_HPP
