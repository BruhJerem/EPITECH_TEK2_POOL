//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_CHARACTER_HPP
#define CPP_D09_CHARACTER_HPP

#include <iostream>

class Character {

private:
protected:
    int _level;
    std::string _name;
    int _pv;
    int _power;
    std::string _class;
    std::string _race;
    int _stamina;
    int _spirit;
    int _agility;
    int _strength;
    int _inteligence;
    bool checkEnergy(int cost, int currEnergy, std::string name);


public:
    Character(const std::string name, int level);
    const std:: string &getName () const;
    int getLvl() const;
    int getPv() const;
    int getPower() const;
    int getAgility()const;
    int getStrength()const;
    int getStamina()const;
    int getIntelligence()const;
    int getSpirit()const;

    int Range;
    enum Range { CLOSE, RANGE };

    int CloseAttack();
    void Heal();
    int RangeAttack();
    void RestorePower();
    void TakeDamage(int damage);
};


#endif //CPP_D09_CHARACTER_HPP
