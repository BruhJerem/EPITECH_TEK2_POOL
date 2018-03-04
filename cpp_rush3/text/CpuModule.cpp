/*
** EPITECH PROJECT, 2018
** CpuModule
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#include <iostream>
#include <unistd.h>
#include "CpuModule.hpp"
#include "MonitorModule.hpp"
#include "CPUInfo.hpp"

CpuModule::CpuModule()
{
	this->setName("CPU");
}

CpuModule::~CpuModule()
{

}

void CpuModule::liine()
{
	for (int i = 0; i < COLS; ++i) {
		printw("#");
	}
}

void CpuModule::printContent(CPUInfo &cpu)
{
	std::vector<double> arr = cpu.getVectorCPU();

	printw("\n");
	printw(this->getName().c_str());
	printw(" Module :\n");
	printw("\n");
	printw("Frequency : ");
	printw(cpu.getFrequence().c_str());
	printw("\nName : %s\n", cpu.getName().c_str());
	for (unsigned int i = 0; i < arr.size() ; i++) {
		printw("CPU n°%d : %.02lf %%\n", i, arr[i]);
	}
	printw("\n");
}

void CpuModule::drawWindow(CPUInfo &cpu)
{

	printContent(cpu);
	liine();
	cpu.refresh();
}