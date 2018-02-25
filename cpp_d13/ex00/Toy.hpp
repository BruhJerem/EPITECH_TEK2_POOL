//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#ifndef CPP_D13_TOY_HPP
#define CPP_D13_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy {

public:
    enum ToyType {
	BASIC_TOY,
	ALIEN
    };
    Toy();
    Toy(const ToyType &_type, const std::string &_name, const std::string &_file);

    ToyType getType()const;
    std::string getName()const;
    void setName(const char *name);
    bool setAscii(const char *data);
    std::string getAscii()const;

private:
    ToyType _type;
    std::string _name;
    Picture _picture;
};


#endif //CPP_D13_TOY_HPP
