/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_TABLE_HPP
#define CPP_RUSH2_TABLE_HPP

#include "ITable.hpp"
#include "Object.hpp"

class Table : public ITable
{
protected:
    int size;
    int currentNumberObject;
    Object **objectArray;

public:
    Table();
    Table(Table &table);
    ~Table();

    ITable *createTable()const;
    int addObjectToTable(Object *object);
    Object **getObjectArray()const;
    int getSize()const;
    int getCurrentNumberObject()const;
    void removeToyAndWrap(Object *toy, Object *wrap);
};

#endif //CPP_RUSH2_TABLE_HPP
