//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#ifndef CPP_D16_EVENTMANAGER_HPP
#define CPP_D16_EVENTMANAGER_HPP

#include <list>
#include "Event.hpp"

class EventManager
{
public:
    EventManager();
    ~EventManager();
    EventManager(EventManager const &other);
    EventManager &operator=(EventManager const &rhs);


    void addEvent(const Event &e);
    void removeEventsAt(unsigned int time);
    void dumpEvents() const;
    void dumpEventAt(unsigned int time) const;
    void addTime(unsigned int time);
    void addEventList(std::list <Event> &events);

private:
    std::list<Event> *_list;
    unsigned int _currTime;
};


#endif //CPP_D16_EVENTMANAGER_HPP
