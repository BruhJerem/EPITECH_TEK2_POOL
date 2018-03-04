/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_ELF_HPP
#define CPP_RUSH2_ELF_HPP

#include <iostream>
#include "IElf.hpp"
#include "Table.hpp"
#include "Object.hpp"
#include "ConveyorBelt.hpp"

class Elf : virtual public IElf
{
private:
    Table *table;
    std::string name;

public:
    Elf(std::string name = "Random Retard", Table *table = new Table);
    Elf(Elf& elf);
    ~Elf();

    /* Belt Handling */
    void sendObjectToBelt(Object *object, ConveyorBelt *belt);

    /* Table handling functions */
    Object *findToyOnTable()const;
    Object *findWrapOnTable()const;
    Table *look()const;
    void WrapMeTableObject();
    Object *wrapObject(Object *object, Object *wrap);
};

#endif //CPP_RUSH2_ELF_HPP
