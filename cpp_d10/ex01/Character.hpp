//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_CHARACTER_HPP
#define CPP_D10_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {
public:
    Character(const std::string &name);
    ~Character ();

    AWeapon *getWeaponPointer()const;
    int getAp()const;
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(AEnemy *enemy);
    const std::string getName() const;

private:
    const std::string _name;
    int _ap;
    AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &s, Character &character);

#endif //CPP_D10_CHARACTER_HPP
