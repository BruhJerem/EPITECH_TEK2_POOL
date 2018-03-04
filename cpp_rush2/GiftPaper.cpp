/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include "GiftPaper.hpp"
#include "Object.hpp"

GiftPaper::GiftPaper() : Wrap()
{

}

GiftPaper::~GiftPaper()
{

}

void GiftPaper::wrapMeThat(Object *object)
{
	if (this->_object == nullptr) {
		this->_object = object;
	}
}