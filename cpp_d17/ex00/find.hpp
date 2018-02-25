//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#ifndef CPP_D17_FIND_HPP
#define CPP_D17_FIND_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator do_find(T &ref, int iterator)
{
	return std::find(ref.begin(),ref.end(), iterator);
}

#endif //CPP_D17_FIND_HPP
