/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#ifndef CPP_D06_KOALADOCTORLIST_H
#define CPP_D06_KOALADOCTORLIST_H

#include <iostream>
#include "KoalaDoctor.hpp"

class KoalaDoctorList {
public:
    KoalaDoctor *doctor;
    KoalaDoctorList *next;

    KoalaDoctorList(KoalaDoctor*);
    bool isEnd();
    void append(KoalaDoctorList*);
    KoalaDoctor *getFromName(std::string);
    KoalaDoctorList *remove(KoalaDoctorList*);
    KoalaDoctorList *removeFromName(std::string);
    KoalaDoctorList *getNext();
    void dump();
};


#endif //CPP_D06_KOALADOCTORLIST_H
