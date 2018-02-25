//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_SQUAD_HPP
#define CPP_D10_SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
    int _count;
    int _size;
    ISpaceMarine **unit;

public:
    Squad();
    Squad(const Squad &squad);

    ~Squad();

    Squad &operator=(const Squad &squad);

    int getCount() const;
    ISpaceMarine* getUnit(int);
    int push(ISpaceMarine*);
    void resize();

private:

};


#endif //CPP_D10_SQUAD_HPP
