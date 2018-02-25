//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_SORCERER_HPP
#define CPP_D10_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

private:
    const std::string _name;
    const std::string _title;

public:
    Sorcerer(const std::string name, const std::string title);
    ~Sorcerer();

    void polymorph(const Victim &victim)const;

    const std::string getName()const;
    const std::string getTitle()const;

};

std::ostream &operator<<(std::ostream &s, const Sorcerer &sorcerer);

#endif //CPP_D10_SORCERER_HPP
