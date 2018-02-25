/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#ifndef CPP_D06_KOALANURSE_H
# define CPP_D06_KOALANURSE_H

#include <iostream>
#include "SickKoala.hpp"

class KoalaNurse {
public:
    int ID;
    bool isWorking;

    KoalaNurse(int);
    ~KoalaNurse();
    void giveDrug(std::string, SickKoala*);
    std::string readReport(std::string);
    void timeCheck();
    int getID();
};

#endif //CPP_D06_KOALANURSE_H
