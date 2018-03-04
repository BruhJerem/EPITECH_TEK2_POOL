/*
** EPITECH PROJECT, 2018
** Main
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#ifndef CPP_RUSH3_MAIN_HPP
#define CPP_RUSH3_MAIN_HPP

#include <curses.h>
#include <ncurses.h>
#include <iostream>
#include "IMonitorModule.hpp"

class MonitorModule : public IMonitorModule
{
public:
	MonitorModule();
	~MonitorModule();

	void drawWindow();
	std::string getName() const;
	void setName(std::string name);
	void printContent();
protected:
	std::string _moduleName;
};

#endif //CPP_RUSH3_MAIN_HPP
