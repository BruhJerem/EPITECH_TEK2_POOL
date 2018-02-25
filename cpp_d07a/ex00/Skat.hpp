//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#ifndef CPP_D07A_SKAT_HPP
#define CPP_D07A_SKAT_HPP

#include <iostream>

class Skat
{
private:
    std::string _name;
    int _stimPacks;

public:
    Skat(const std::string &name= "bob", int stimPacks = 15);
    ~Skat();

    int &stimPaks();
    const std::string &name();

    void shareStimPaks(int number, int &stock);
    void addStimPaks(unsigned int number);
    void useStimPaks();

    void status();

};


#endif //CPP_D07A_SKAT_HPP
