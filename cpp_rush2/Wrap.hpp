/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_WRAP_HPP
#define CPP_RUSH2_WRAP_HPP

#include "Object.hpp"

class Wrap : public Object
{
protected:
	bool _open;
	Object *_object;

public:
	Wrap();
	~Wrap();
	void openMe();
	void closeMe();
	void take();
};

#endif //CPP_RUSH2_WRAP_HPP
