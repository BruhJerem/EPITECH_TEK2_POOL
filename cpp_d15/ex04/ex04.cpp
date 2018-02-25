//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#include <iostream>
#include "ex04.hpp"

/* Without class */

template <>
bool equal(const int s1, const int s2)
{
	return s1==s2;
}

template <>
bool equal(const double s1, const double s2)
{
	return s1==s2;
}

template <>
bool equal(const float s1, const float s2)
{
	return s1==s2;
}

template <>
bool equal(const std::string s1, const std::string s2)
{
	return s1==s2;
}

/* For Class */

template <>
bool Tester<int>::equal(const int s1, const int s2)
{
	return s1==s2;
}

template <>
bool Tester<double>::equal(const double s1, const double s2)
{
	return s1==s2;
}

template <>
bool Tester<float>::equal(const float s1, const float s2)
{
	return s1==s2;
}

template <>
bool Tester<std::string>::equal(const std::string s1, const std::string s2)
{
	return s1==s2;
}