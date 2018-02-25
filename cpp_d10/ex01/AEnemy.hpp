//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_AENEMY_HPP
#define CPP_D10_AENEMY_HPP

#include <iostream>

class AEnemy {

public:
    AEnemy(int hp , const  std:: string &type);

    virtual ~AEnemy ();

    virtual void takeDamage(int damage);

    const std::string &getType() const;
    int getHP() const;

protected:
    int _hp;
    const std::string& _type;


};


#endif //CPP_D10_AENEMY_HPP
