//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#ifndef CPP_D07M_FEDERATION_H
#define CPP_D07M_FEDERATION_H

#include <iostream>
#include "WarpSystem.hpp"

namespace Federation
{
    namespace Starfleet
    {
	class Ship {
	private:
	    int _length;
	    int _width;
	    std::string _name;
	    short _maxWarp;

	public:
	    WarpSystem::Core *core;
	    Ship(int length, int width, std::string name, short maxWarp);
	    void setupCore(WarpSystem::Core *);
	    void checkCore();
	};
    }
    class Ship {
	private:
	    int _length;
	    int _width;
	    std::string _name;
	    short _maxWarp;

	public:
	    WarpSystem::Core *core;
	    Ship(int length, int width, std::string name);
	    void setupCore(WarpSystem::Core *);
	    void checkCore();
	};

}

#endif //CPP_D07M_FEDERATION_H