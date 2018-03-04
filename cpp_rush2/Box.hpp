/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_BOX_HPP
#define CPP_RUSH2_BOX_HPP

#include "Wrap.hpp"

class Box : public Wrap
{
public:
	Box();
	~Box();
	bool isOpen() const;
	Object *getObject() const;
	void setOpen(bool status);
	void wrapMeThat(Object *object);
};

#endif //CPP_RUSH2_BOX_HPP
