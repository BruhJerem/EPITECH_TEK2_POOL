/*
** EPITECH PROJECT, 2018
** SysInfoModule
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#ifndef CPP_RUSH3_SYSINFOMODULE_HPP
#define CPP_RUSH3_SYSINFOMODULE_HPP

#include "MonitorModule.hpp"
#include "SysInfo.hpp"

class SysInfoModule : public MonitorModule
{
public:
	SysInfoModule();
	~SysInfoModule();

	void printContent(SysInfo &sysinfo);
	void drawWindow(SysInfo &sysinfo);
	virtual void liine();
private:
};

#endif //CPP_RUSH3_SYSINFOMODULE_HPP
