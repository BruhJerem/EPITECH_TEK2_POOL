//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14m
// File description:
//
//

#ifndef CPP_D14M_FRUITBOX_HPP
#define CPP_D14M_FRUITBOX_HPP


#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox
{
private:
    int _size;
    int _nbFruits;
    FruitNode *list;

public:
    FruitBox(int size);
    int nbFruits()const;
    int getSize()const;
    bool putFruit(Fruit *f);
    Fruit *pickFruit();
    FruitNode *head()const;
    std::string getClassName();
};


#endif //CPP_D14M_FRUITBOX_HPP
