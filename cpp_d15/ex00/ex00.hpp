//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#ifndef CPP_D15_EX00_HPP
#define CPP_D15_EX00_HPP

#include <algorithm>

template <typename T>
void swap(T &s1, T &s2)
{
	std::swap(s1, s2);
}

template <typename T>
T min(T s1, T s2)
{
	if (s1 < s2)
		return s1;
	return s2;
}

template <typename T>
T max(T s1, T s2)
{
	if (s1 > s2)
		return s1;
	return s2;
}

template <typename T>
T add(T s1, T s2)
{
	return s1 + s2;
}

#endif //CPP_D15_EX00_HPP
