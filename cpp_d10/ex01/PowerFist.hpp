//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_POWERFIST_HPP
#define CPP_D10_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon{
public:
    PowerFist(const std::string &name = "Power Fist", int apcost = 8, int damage = 50);
    ~PowerFist();
    void attack()const;
};


#endif //CPP_D10_POWERFIST_HPP
