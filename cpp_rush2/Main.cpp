/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <typeinfo>
#include "Object.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"

Object **MyUnitTests()
{
	Object **tab = new Object*[2];
	tab[0] = new LittlePony("happy pony");
	tab[1] = new Teddy("cuddles");

	return tab;
}

Object *MyUnitTests(Object **obj)
{
	auto *teddy = (Teddy *) obj[0];
	auto *box = (Box *) obj[1];
	auto *giftpaper = (GiftPaper *) obj[2];

	box->wrapMeThat(teddy);
	std::cout << box->getClassName() << std::endl;
	giftpaper->wrapMeThat(box);

	return giftpaper;
}

int main()
{
	Object **test = MyUnitTests();

	std::cout << test[0]->isTaken() << std::endl;
	std::cout << test[1]->isTaken() << std::endl;

	auto **tab = new Object*[4];
	tab[0] = new Teddy("cuddles");
	tab[1] = new Box();
	tab[2] = new GiftPaper();
	tab[3] = nullptr;

	auto *test2 = (GiftPaper *) MyUnitTests(tab);
	std::cout << test2->isTaken() << std::endl;

	return 0;
}
