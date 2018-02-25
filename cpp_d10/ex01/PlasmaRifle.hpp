//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_PLASMARIFLE_HPP
#define CPP_D10_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon{
public:
    PlasmaRifle(const std::string &name = "Plasma Rifle", int apcost = 5, int damage = 21);
    ~PlasmaRifle();
    void attack()const;

};


#endif //CPP_D10_PLASMARIFLE_HPP
