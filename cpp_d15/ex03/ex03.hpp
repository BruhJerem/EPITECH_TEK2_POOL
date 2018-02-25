//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#ifndef CPP_D15_EX03_HPP
#define CPP_D15_EX03_HPP

#include <iostream>

template <typename T>
void foreach(T *tab, void (*fun)(const T &), int size)
{
	for (int i = 0; i < size; i++) {
		fun(tab[i]);
	}
}

template <typename T>
void print(const T &elem)
{
	std::cout << elem << std::endl;
}

#endif //CPP_D15_EX03_HPP
