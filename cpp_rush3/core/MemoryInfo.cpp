//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_rush3
// File description:
//
//

#include <iostream>
#include <ctime>
#include <cstring>
#include <cpuid.h>
#include <sys/statvfs.h>
#include <thread>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <sys/sysinfo.h>
#include <cmath>
#include "MemoryInfo.hpp"

MemoryInfo::MemoryInfo()
{
	struct sysinfo info;
	sysinfo(&info);

	/*if (sysinfo(&info) != 0)
		error("sysinfo: error reading system statistics");*/

	this->_totalRam = ((size_t) info.totalram *
		(size_t) info.mem_unit) / pow(2,30);
	this->_freeRam = ((size_t) info.freeram * (size_t) info.mem_unit)
		      / pow(2,30);
	this->_usedWithoutCacheRam = _totalRam - _freeRam - ((size_t) info.bufferram
						    / pow(2,30));
	this->_usedRam = _totalRam - _freeRam;

	this->_totalSwap = ((size_t) info.totalswap *
			   (size_t) info.mem_unit) / pow(2,30);
	this->_freeSwap = ((size_t) info.freeswap * (size_t) info.mem_unit)
			 / pow(2,30);

	this->_usedSwap = _totalSwap - _freeSwap;
}

double MemoryInfo::getTotalRam() const
{
	return _totalRam;
}

double MemoryInfo::getFreeRam() const
{
	return _freeRam;
}

double MemoryInfo::getUsedRam() const
{
	return _usedRam;
}

double MemoryInfo::getUsedWithoutCacheRam() const
{
	return _usedWithoutCacheRam;
}

double MemoryInfo::getTotalSwap() const
{
	return _totalSwap;
}

double MemoryInfo::getFreeSwap() const
{
	return _freeSwap;
}

double MemoryInfo::getUsedSwap() const
{
	return _usedSwap;
}

void MemoryInfo::refresh()
{
	struct sysinfo info;
	sysinfo(&info);

	/*if (sysinfo(&info) != 0)
		error("sysinfo: error reading system statistics");*/

	this->_totalRam = ((size_t) info.totalram *
			   (size_t) info.mem_unit) / pow(2,30);
	this->_freeRam = ((size_t) info.freeram * (size_t) info.mem_unit)
			 / pow(2,30);
	this->_usedWithoutCacheRam = _totalRam - _freeRam - ((size_t) info.bufferram
							     / pow(2,30));
	this->_usedRam = _totalRam - _freeRam;

	this->_totalSwap = ((size_t) info.totalswap *
			    (size_t) info.mem_unit) / pow(2,30);
	this->_freeSwap = ((size_t) info.freeswap * (size_t) info.mem_unit)
			  / pow(2,30);

	this->_usedSwap = _totalSwap - _freeSwap;
}
