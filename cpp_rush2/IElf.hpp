/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_IELF_HPP
#define CPP_RUSH2_IELF_HPP

#include "Table.hpp"

class IElf
{
public :
    ~IElf() {}

    virtual Table *look() const = 0;
    virtual void WrapMeTableObject()=0;
    virtual Object *findToyOnTable()const = 0;
    virtual Object *findWrapOnTable()const = 0;
    virtual Object *wrapObject(Object *object, Object *wrap)=0;
};

#endif //CPP_RUSH2_IELF_HPP
