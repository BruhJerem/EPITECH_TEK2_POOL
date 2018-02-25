//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07m
// File description:
//
//

#ifndef CPP_D07M_BORG_HPP
#define CPP_D07M_BORG_HPP

#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Federation
{
    namespace Starfleet
    {
	class Ship;
    }
    class Ship;
}

namespace Borg
{
    class Ship {
    private:
	int _size;
	short _maxWarp;
	WarpSystem::Core *core;
	Destination _location;
	Destination _home;
	int _shield;
	int _weaponFrequency;
	short _repair;

    public:
	Ship(int weaponFrequency);
	Ship(int weaponFrequency, short repair);
	void setupCore(WarpSystem::Core *);
	void checkCore();
	bool  move(int warp , Destination d);
	bool  move(int  warp);
	bool  move(Destination d);
	bool  move();
	int getShield();
	void  setShield(int  shield);
	int  getWeaponFrequency ();
	void  setWeaponFrequency(int  frequency);
	short  getRepair ();
	void  setRepair(short  repair);
	void fire(Federation::Starfleet::Ship *target);
	void fire(Federation::Ship *target);
	void repair();
    };
}


#endif //CPP_D07M_BORG_HPP
