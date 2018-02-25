//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#ifndef CPP_D07A_KOALABOT_HPP
#define CPP_D07A_KOALABOT_HPP

#include <iostream>
#include "Parts.hpp"

class KoalaBot {

private:
    std::string _serial;
    Arms _arm;
    Legs _legs;
    Head _head;

public:
    KoalaBot(std::string serial="Bob-01");
    void setParts(Legs &leg);
    void setParts(Arms &arm);
    void setParts(Head &head);
    void swapParts(Legs &leg);
    void swapParts(Arms &arm);
    void swapParts(Head &head);
    void informations();
    bool status();
};


#endif //CPP_D07A_KOALABOT_HPP
