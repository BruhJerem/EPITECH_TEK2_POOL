/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_ITABLE_HPP
#define CPP_RUSH2_ITABLE_HPP

#include "Object.hpp"

class ITable
{
public:
    ~ITable(){};
    virtual ITable *createTable () const = 0;
    virtual int addObjectToTable(Object *object) = 0;
    virtual Object **getObjectArray()const=0;
    virtual int getSize()const=0;
    virtual int getCurrentNumberObject()const=0;
};

#endif //CPP_RUSH2_ITABLE_HPP
