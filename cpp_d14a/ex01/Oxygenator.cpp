
#include <iostream>
#include "Errors.hpp"
#include "Oxygenator.hpp"

Oxygenator::Oxygenator()
    : _quantity(0)
{
}

void
Oxygenator::generateOxygen()
{
    _quantity += 10;
}

void
Oxygenator::useOxygen(int quantity)
{
	if (_quantity - quantity <= 10 && _quantity > 10) {
		MissionCriticalError error("Not enough oxygen to continue the mission.",
					   "Oxygenator");
		throw error;
	}
    if (quantity +10 > _quantity) {
	    LifeCriticalError error("Not enough oxygen to live.",
				    "Oxygenator");
        throw error;
    }
	_quantity -= quantity;

}
