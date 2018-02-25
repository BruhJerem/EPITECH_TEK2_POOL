//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#ifndef CPP_D13_BUZZ_HPP
#define CPP_D13_BUZZ_HPP

#include "Toy.hpp"

class Buzz : public Toy
{
public:
    Buzz(const char *name, const char *filename="./buzz.txt");
    void speak(std::string statement)const;
    bool speak_es(std::string statement)const;
};


#endif //CPP_D13_BUZZ_HPP
