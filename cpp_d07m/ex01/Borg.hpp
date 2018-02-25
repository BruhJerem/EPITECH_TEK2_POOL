//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#ifndef CPP_D07M_BORG_HPP
#define CPP_D07M_BORG_HPP

#include "WarpSystem.hpp"

namespace Borg
{
    class Ship {
    private:
	int _size;
	short _maxWarp;
	WarpSystem::Core *core;

    public:
	Ship();
	void setupCore(WarpSystem::Core *);
	void checkCore();
    };
}


#endif //CPP_D07M_BORG_HPP
