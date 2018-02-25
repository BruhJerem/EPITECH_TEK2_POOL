//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#ifndef CPP_D13_PICTURE_HPP
#define CPP_D13_PICTURE_HPP

#include <iostream>

class Picture {
public:
    std::string data;

    Picture();
    Picture(const std::string &file);
    bool getPictureFromFile(const std:: string &file);
    Picture &operator=(const Picture &pic);
};


#endif //CPP_D13_PICTURE_HPP
