/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#ifndef CPP_D06_KOALADOCTOR_H
#define CPP_D06_KOALADOCTOR_H

#include <iostream>
#include "SickKoala.hpp"
#include "KoalaNurse.hpp"

class KoalaDoctor {
public:
    std::string name;
    bool isWorking;

    KoalaDoctor(std::string);
    ~KoalaDoctor();
    void diagnose(SickKoala*);
    void timeCheck();
    std::string getName();
};


#endif //CPP_D06_KOALADOCTOR_H
