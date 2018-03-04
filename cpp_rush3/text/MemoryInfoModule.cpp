/*
** EPITECH PROJECT, 2018
** MemoryInfoModule
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#include "MemoryInfoModule.hpp"

MemoryInfoModule::MemoryInfoModule()
{
	this->setName("MemoryInfo");
}

MemoryInfoModule::~MemoryInfoModule()
{

}

void MemoryInfoModule::liine()
{
	for (int i = 0; i < COLS; ++i) {
		printw("#");
	}
}

void MemoryInfoModule::printContent(MemoryInfo &memoryInfo)
{
	printw("\n");
	printw(this->getName().c_str());
	printw(" Module :\n");
	printw("\n");
	printw("Total Ram : ");
	printw("%.02lf GB", memoryInfo.getTotalRam());
	printw("\n");
	printw("Free Ram : ");
	printw("%.02lf GB", memoryInfo.getFreeRam());
	printw("\n");
	printw("Memory used without cache Ram : ");
	printw("%.02lf GB", memoryInfo.getUsedWithoutCacheRam());
	printw("\n");
	printw("Ram used : ");
	printw("%.02lf GB", memoryInfo.getUsedRam());
	printw("\n");
	printw("Total swap : ");
	printw("%.02lf GB", memoryInfo.getTotalSwap());
	printw("\n");
	printw("Free swap : ");
	printw("%.02lf GB", memoryInfo.getFreeSwap());
	printw("\n");
	printw("Used swap : ");
	printw("%.02lf GB", memoryInfo.getUsedSwap());
	printw("\n");
	printw("\n");
}

void MemoryInfoModule::drawWindow(MemoryInfo &memoryInfo)
{
	printContent(memoryInfo);
	liine();
	memoryInfo.refresh();
}