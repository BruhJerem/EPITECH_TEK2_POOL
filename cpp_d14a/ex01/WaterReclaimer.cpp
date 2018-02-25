
#include <iostream>
#include "Errors.hpp"
#include "WaterReclaimer.hpp"

WaterReclaimer::WaterReclaimer()
    : _water(0),
      _started(false)
{
}

void
WaterReclaimer::start()
{
    if (this->_water == 0) {
        MissionCriticalError error("Not enough water to achieve the mission.",
                                   "WaterReclaimer");
        throw(error);
    }
    _started = true;
}

void
WaterReclaimer::useWater(int water)
{
    if (_water == 0) {
        UserError error("Cannot use water if the reclaimer hasn't started.",
        "WaterReclaimer");
        throw error;
    }
    if (water < 0) {
        UserError error("Water use should be positif.",
                        "WaterReclaimer");
        throw (error);
    }
    if (_water < 90) {
        LifeCriticalError error("Cannot use water, not enough in the reclaimer."
                , "WaterReclaimer");
        throw (error);
    }
    _water -= water;
}

void
WaterReclaimer::generateWater()
{
    if (_water == 100) {
        NasaError error("Cannot generate water, reclaimer already full.",
                        "WaterReclaimer");
        throw(error);
    }
    _water += 10;
}
