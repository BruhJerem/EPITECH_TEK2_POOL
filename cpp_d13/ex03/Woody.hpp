//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#ifndef CPP_D13_WOODY_HPP
#define CPP_D13_WOODY_HPP

#include "Toy.hpp"

class Woody : public Toy
{
public:
    Woody(const char *name, const char* filename="./woody.txt");
    void speak(std::string statement)const;
};


#endif //CPP_D13_WOODY_HPP
