//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#ifndef CPP_D15_EX02_HPP
#define CPP_D15_EX02_HPP

#include <iostream>

int min (int s1, int s2)
{
	std::cout << "non-template min" << std::endl;
	if (s1 < s2) {
		return s1;
	} else if (s1 > s2) {
		return s2;
	}
	return s1;
}

int nonTemplateMin(int *tab, const int size)
{
	int res = tab[0];
	for (int i = 1; i < size; ++i) {
		res = min(res, tab[i]);
	}
	return res;
}

template <typename T>
T min(T s1, T s2)
{
	std::cout << "template min" << std::endl;
	if (s1 < s2) {
		return s1;
	} else if (s1 > s2) {
		return s2;
	}
	return s1;
}
template <typename T>
T templateMin(T *tab, const int size)
{
	T res = tab[0];
	for (int i = 1; i < size; ++i) {
		res = min<T>(res, tab[i]);
	}
	return res;
}



#endif //CPP_D15_EX02_HPP
