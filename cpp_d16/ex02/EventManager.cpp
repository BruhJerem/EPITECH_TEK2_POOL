//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#include "EventManager.hpp"

EventManager::EventManager()
{
	this->_list = new std::list<Event>;
	_currTime = 0;
}

EventManager::~EventManager() {}

EventManager::EventManager(EventManager const &other)
{
	this->_list = other._list;
	this->_currTime = other._currTime;
}

EventManager &EventManager::operator=(EventManager const &rhs)
{
	this->_list = rhs._list;
	this->_currTime = rhs._currTime;
	return *this;
}

void EventManager::addEvent(const Event &e)
{
	// need to make the checks
	this->_list->push_back(e);
	this->_list->sort([](const Event &a, const Event &b){
	    return a.getTime() < b.getTime();
	});
}

void EventManager::removeEventsAt(unsigned int time)
{
	this->_list->remove_if
		([time](const Event &event) {
		    return time == event.getTime();
		});
}

void EventManager::dumpEvents() const
{

	for (Event x : *this->_list) {
		if (x.getTime() > _currTime)
			std::cout << x.getTime() << ": " << x.getEvent()
				  << std::endl;
	}
}

void EventManager::dumpEventAt(unsigned int time) const
{
	for (Event x : *this->_list) {
		if (x.getTime() == time)
			std::cout << x.getTime() << ": " << x.getEvent()
				  << std::endl;
	}
}

void EventManager::addTime(unsigned int time)
{
	for (Event x : *this->_list) {
		if (x.getTime() > _currTime
		    && x.getTime() <= _currTime + time) {
			std::cout << x.getEvent() << std::endl;
		}
	}
	unsigned int r = this->_currTime;
	this->_list->remove_if
		([r](const Event &event) {
		    return r > event.getTime();
		});
	this->_currTime += time;
}

void EventManager::addEventList(std::list<Event> &events)
{
	//events.front();
	for (Event x : events) {
//		std::cout << x.getEvent() << std::endl;
		this->_list->push_back(x);
	}

	this->_list->sort([](const Event &a, const Event &b){
	    return a.getTime() < b.getTime();
	});
}
