/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>

#ifndef CPP_RUSH2_OBJECT_HPP
#define CPP_RUSH2_OBJECT_HPP

class Object
{
protected:
	bool _taken;

public:
	Object();
	virtual ~Object();
	virtual bool isTaken();
	virtual void setTaken(bool status);
	virtual std::string getClassName();

};

#endif //CPP_RUSH2_OBJECT_HPP
