//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#include "Event.hpp"

Event::Event()
{
	this->_time = 0;
}

Event::Event(unsigned int time, const std::string &event)
{
	this->_time = time;
	this->_event = event;
}

Event::~Event() {}

Event::Event(const Event &other)
{
	this->_event = other._event;
	this->_time = other._time;
}

Event &Event::operator=(const Event &rhs)
{
	this->_time = rhs._time;
	this->_event = rhs._event;
	return *this;
}

unsigned int Event::getTime() const
{
	return _time;
}

const std::string &Event::getEvent() const
{
	return _event;
}

void Event::setTime(unsigned int time)
{
	this->_time = time;
}

void Event::setEvent(const std::string &event)
{
	this->_event = event;
}
