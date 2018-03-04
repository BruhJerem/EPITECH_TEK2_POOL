/*
** EPITECH PROJECT, 2018
** MemoryInfoModule
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#ifndef CPP_RUSH3_MEMORYINFOMODULE_HPP
#define CPP_RUSH3_MEMORYINFOMODULE_HPP

#include "MonitorModule.hpp"
#include "MemoryInfo.hpp"
class MemoryInfoModule : public MonitorModule
{
public:
	MemoryInfoModule();
	~MemoryInfoModule();

	void printContent(MemoryInfo &memoryInfo);
	void drawWindow(MemoryInfo &memoryInfo);
	virtual void liine();
};

#endif //CPP_RUSH3_MEMORYINFOMODULE_HPP
