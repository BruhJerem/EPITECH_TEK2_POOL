/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#ifndef CPP_D06_SICKKOALALIST_H
#define CPP_D06_SICKKOALALIST_H

#include <iostream>
#include "SickKoala.hpp"

class SickKoalaList {
public:
    SickKoala *koala;
    SickKoalaList *next;

    SickKoalaList(SickKoala*);
    bool isEnd();
    void append(SickKoalaList*);
    SickKoala *getFromName(std::string);
    SickKoalaList *remove(SickKoalaList*);
    SickKoalaList *removeFromName(std::string);
    SickKoala *getContent();
    SickKoalaList *getNext();
    void dump();
};


#endif //CPP_D06_SICKKOALALIST_H
