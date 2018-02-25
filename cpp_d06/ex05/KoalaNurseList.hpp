/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#ifndef CPP_D06_KOALANURSELIST_H
#define CPP_D06_KOALANURSELIST_H

#include <iostream>
#include "KoalaNurse.hpp"

class KoalaNurseList {
public:
    KoalaNurse *nurse;
    KoalaNurseList *next;

    KoalaNurseList(KoalaNurse*);
    bool isEnd();
    void append(KoalaNurseList*);
    KoalaNurseList *remove(KoalaNurseList*);
    KoalaNurseList *removeFromID(int);
    void dump();
};


#endif //CPP_D06_KOALANURSELIST_H
