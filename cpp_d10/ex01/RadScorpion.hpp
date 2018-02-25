//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_RADSCORPION_HPP
#define CPP_D10_RADSCORPION_HPP

#include "AEnemy.hpp"

class RadScorpion : public AEnemy{
public:
    RadScorpion(int hp=80, const std::string &type="RadScorpion");
    ~RadScorpion();

};


#endif //CPP_D10_RADSCORPION_HPP
