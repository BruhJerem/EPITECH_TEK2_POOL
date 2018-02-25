//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14m
// File description:
//
//

#include "LittleHand.hpp"
#include "Lemon.hpp"
#include "Banana.hpp"
#include "Lime.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons,
		      FruitBox &bananas, FruitBox &limes)
{
	FruitBox tmp=FruitBox(unsorted.getSize());
	if (unsorted.head() == NULL)
		return;
	auto f = unsorted.pickFruit();
	while (f) {
		auto name = f->getName();
		if (name == "lemon" && lemons.nbFruits() < lemons.getSize())
			lemons.putFruit(f);
		else if (name == "banana" && bananas.nbFruits()
					     < bananas.getSize())
			bananas.putFruit(f);
		else if (name == "lime" && limes.nbFruits() < limes.getSize())
			limes.putFruit(f);
		else
			tmp.putFruit(f);
		f = unsorted.pickFruit();
	}
	unsorted = tmp;
}
