/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_GIFTPAPER_HPP
#define CPP_RUSH2_GIFTPAPER_HPP

#include "Wrap.hpp"

class GiftPaper : public Wrap
{
public:
	GiftPaper();
	~GiftPaper();
	void wrapMeThat(Object *object);
};

#endif //CPP_RUSH2_GIFTPAPER_HPP
