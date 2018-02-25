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

FruitBox *const *LittleHand::organizeCoconut(Coconut const *const *coconuts)
{
	int max = 6;
	int count = 0;
	int index;
	while (coconuts[count++]);
	count--;
	FruitBox **pFruitBox = new FruitBox*[count / max + 2];
	pFruitBox[count / max + 1] = NULL;
	for (int i = 0; i < count; ++i) {
		if (i % max != 0) {
			pFruitBox[index] = new FruitBox(max);
		}
		index = i / max;
		pFruitBox[index]->putFruit((Fruit*)coconuts[i]);
	}
	return pFruitBox;
}