//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#ifndef CPP_D15_EX01_HPP
#define CPP_D15_EX01_HPP

#include <cstring>

template <typename T>
int compare(const T &s1, const T &s2)
{
	if (s1<s2)
		return -1;
	if (s1>s2)
		return 1;
	return 0;
}

int compare(const char *s1, const char *s2)
{
	int i = strcmp(s1, s2);
	if (i < -1)
		i = -1;
	else if (i > 1)
		i = 1;
	return i;
}

#endif //CPP_D15_EX01_HPP
