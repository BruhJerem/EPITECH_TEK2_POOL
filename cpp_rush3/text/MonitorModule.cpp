/*
** EPITECH PROJECT, 2018
** Main
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#include <curses.h>
#include <ncurses.h>
#include <cstdlib>
#include "IMonitorModule.hpp"
#include "MonitorModule.hpp"
#include "CpuModule.hpp"
#include "../core/SysInfo.hpp"
#include "SysInfoModule.hpp"
#include "MemoryInfoModule.hpp"

MonitorModule::MonitorModule()
{
}

MonitorModule::~MonitorModule()
{
}

std::string MonitorModule::getName() const
{
	return this->_moduleName;
}

void MonitorModule::setName(std::string const name)
{
	this->_moduleName = name;
}

int main()
{
	int ch;
	CpuModule cpu;
	SysInfoModule sys;
	MemoryInfoModule mem;
	initscr();
	CPUInfo cpu1;
	SysInfo sys1;
	MemoryInfo mem1;

	ch = 0;
	while (ch != KEY_END) {
		clear();
		curs_set(0);
		cpu.drawWindow(cpu1);
		sys.drawWindow(sys1);
		mem.drawWindow(mem1);
		refresh();
	}
}