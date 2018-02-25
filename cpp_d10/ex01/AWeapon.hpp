//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_AWEAPON_HPP
#define CPP_D10_AWEAPON_HPP

#include <iostream>

class AWeapon {
public:
    AWeapon(const std::string &name, int apcost, int damage);

    virtual ~AWeapon ();
    const std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack()const = 0;

protected:
    const std::string _name;
    int _apcost;
    int _damage;

};


#endif //CPP_D10_AWEAPON_HPP
