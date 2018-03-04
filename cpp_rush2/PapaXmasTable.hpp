/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_PAPAXMASTABLE_HPP
#define CPP_RUSH2_PAPAXMASTABLE_HPP

#include "ITable.hpp"
#include "Object.hpp"

class PapaXmasTable : public ITable
{
    private:
	int size;
	int currentNumberObject;
	Object **objectArray;

    public:
    	PapaXmasTable();
    	~PapaXmasTable();
    	PapaXmasTable(PapaXmasTable &table);

    	ITable *createTable()const;
	int addObjectToTable(Object *object);
	Object **getObjectArray()const;
    	int getSize()const;
    	int getCurrentNumberObject()const;
};

#endif //CPP_RUSH2_PAPAXMASTABLE_HPP
