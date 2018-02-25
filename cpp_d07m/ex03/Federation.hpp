//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#ifndef CPP_D07M_FEDERATION_H
#define CPP_D07M_FEDERATION_H

#include <iostream>
#include "Borg.hpp"
#include "WarpSystem.hpp"
#include "Destination.hpp"

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
	    Destination  _location;
	    Destination  _home;
	    int _shield;
	    int _photonTorpedo;
	    WarpSystem::Core *core;

	public:
	    Ship();
	    Ship(int length, int width, std::string name, short maxWarp, int torpedo);
	    void setupCore(WarpSystem::Core *);
	    void checkCore();
	    void promote(Captain*);
	    bool  move(int, Destination);
	    bool  move(int);
	    bool  move(Destination);
	    bool  move();
	    int  getShield ();
	    void  setShield(int);
	    int  getTorpedo ();
	    void  setTorpedo(int);
	    void  fire(Borg::Ship*);
	    void  fire(int  torpedoes ,Borg::Ship*);
	    WarpSystem::Core *getCore();
	};

    }

    class Ship {
	private:
		int _length;
	    int _width;
	    std::string _name;
	    short _maxWarp;
	Destination  _location;
	Destination  _home;
	int _shield;
	int _photonTorpedo;
	WarpSystem::Core *core;

	public:
	    Ship(int length, int width, std::string name);
	    void setupCore(WarpSystem::Core *);
	    void checkCore();
	    bool  move(int warp , Destination d);
	    bool  move(int  warp);
	    bool  move(Destination d);
	    bool  move();
		WarpSystem::Core* getCore();
	};

}

#endif //CPP_D07M_FEDERATION_H