//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14m
// File description:
//
//

#include "FruitBox.hpp"

FruitBox::FruitBox(int size) : _size(size), _nbFruits(0), list(NULL)
{
}

int FruitBox::nbFruits() const
{
	return this->_nbFruits;
}

bool FruitBox::putFruit(Fruit *f)
{
	FruitNode *tmp;
	FruitNode *elem;
	int nb(1);

	if (nb > _size)
		return false;
	if (list == NULL)
	{
		list = new FruitNode;
		list->fruit = f;
		list->next = NULL;
		_nbFruits++;
		return true;
	}
	tmp = list;
	while (tmp->next != NULL)
	{
		if ((tmp->fruit == f) || (nb >= _size))
			return false;
		nb++;
		tmp = tmp->next;
	}
	if (nb >= _size || tmp->fruit == f)
		return false;
	elem = new FruitNode;
	elem->fruit = f;
	elem->next = NULL;
	tmp->next = elem;
	_nbFruits++;
	return true;
}

Fruit *FruitBox::pickFruit()
{
	FruitNode *tmp;

	if (list == NULL)
		return (NULL);
	tmp = list;
	list = list->next;
	_nbFruits--;
	return tmp->fruit;
}

FruitNode *FruitBox::head() const
{
	return list;
}
