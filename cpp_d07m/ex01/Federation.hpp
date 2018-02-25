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

	class Captain {
	private:
	    std::string _name;
	    int _age;

	public:
	    Captain(std::string);
	    std::string  getName ();
	    int getAge ();
	    void setAge(int  age);
	};

	class Ensign {
	private:
	    std::string _name;

	public:
	    Ensign(const std::string);
	};

	class Ship {
	private:
	    int _length;
	    int _width;
	    std::string _name;
	    short _maxWarp;
	    Captain *captain;

	public:
	    WarpSystem::Core *core;
	    Ship(int length, int width, std::string name, short maxWarp);
	    void setupCore(WarpSystem::Core *);
	    void checkCore();
	    void promote(Captain*);
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