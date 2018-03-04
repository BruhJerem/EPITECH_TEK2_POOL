/*
** EPITECH PROJECT, 2018
** CpuModule
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#ifndef CPP_RUSH3_CPUMODULE_HPP
#define CPP_RUSH3_CPUMODULE_HPP

#include <curses.h>
#include <ncurses.h>
#include <iostream>
#include "MonitorModule.hpp"
#include "CPUInfo.hpp"

class CpuModule : public MonitorModule
{
public:
	CpuModule();
	~CpuModule();

	void printContent(CPUInfo &cpu);
	void drawWindow(CPUInfo &cpu);
	virtual void liine();
private:
};


#endif //CPP_RUSH3_CPUMODULE_HPP
