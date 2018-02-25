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
    bool speak(const std::string statement);
    bool speak_es(const std::string statement);
};


#endif //CPP_D13_BUZZ_HPP
