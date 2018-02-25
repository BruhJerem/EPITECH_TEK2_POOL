//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#ifndef CPP_D16_EVENT_HPP
#define CPP_D16_EVENT_HPP

#include <iostream>

class Event {

public:
    Event();
    Event(unsigned int time, const std::string &event);
    ~Event();
    Event(const Event &other);
    Event &operator=(const Event &rhs);
    unsigned int getTime()const;
    const std:: string &getEvent()const;
    void setTime(unsigned int time);
    void setEvent(const std::string &event);

private:
    unsigned int _time;
    std::string _event;

};


#endif //CPP_D16_EVENT_HPP
