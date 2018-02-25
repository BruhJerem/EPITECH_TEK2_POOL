//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#ifndef CPP_D13_TOYSTORY_HPP
#define CPP_D13_TOYSTORY_HPP

#include <iostream>
#include "Toy.hpp"
#include "Buzz.hpp"
#include "Woody.hpp"

class ToyStory
{

public:

    static void tellMeAStory(std::string const &filename, Toy &toy1,
			     bool (Toy::*func1)(const std::string str1),
			     Toy &toy2,
			     bool (Toy::*func2)(const std::string str2));
};


#endif //CPP_D13_TOYSTORY_HPP
