/*
** EPITECH PROJECT, 2018
** SysInfoModule
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#include "SysInfoModule.hpp"
#include "CPUInfo.hpp"

SysInfoModule::SysInfoModule()
{
	this->setName("SysInfo");
}

SysInfoModule::~SysInfoModule()
{

}

void SysInfoModule::printContent(SysInfo &sysinfo)
{
	printw("\n");
	printw(this->getName().c_str());
	printw(" Module :\n");
	printw("\n");
	printw("HostName : ");
	printw(sysinfo.getHostName().c_str());
	printw("\nSystem Name : ");
	printw(sysinfo.getSysName().c_str());
	printw("\nKernel Release : ");
	printw(sysinfo.getKernelRelease().c_str());
	printw("\nKernel Build : ");
	printw(sysinfo.getKernelBuild().c_str());
	printw("\nMachine Arch : ");
	printw(sysinfo.getMachineArch().c_str());
	printw("\nTime and date : ");
	printw(sysinfo.getTimeAndDate().c_str());
	printw("\n");
}

void SysInfoModule::liine()
{
	for (int i = 0; i < COLS; ++i) {
		printw("#");
	}
}

void SysInfoModule::drawWindow(SysInfo &sysinfo)
{
	printContent(sysinfo);
	liine();
	sysinfo.upadteTimeAndDate();
}

