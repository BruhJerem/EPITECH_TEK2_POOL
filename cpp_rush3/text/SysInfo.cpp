//
// EPITECH PROJECT, 2018
// CPP_RUSH3
// File description:
// 
//

#include "SysInfo.hpp"

#include <iostream>
#include <sys/utsname.h>
#include <ctime>

SysInfo::SysInfo(void)
{
	struct utsname sysinfo;
	uname(&sysinfo);
	std::time_t timeStamp = std::time(nullptr);

	_sysName = sysinfo.sysname;
        _hostName = sysinfo.nodename;
        _kernelRelease = sysinfo.release;
        _kernelBuild = sysinfo.version;
        _machineArch = sysinfo.machine;
        _domaineName = sysinfo.domainname;
	_timeAndDate = std::asctime(std::localtime(&timeStamp));
}

std::string SysInfo::getSysName(void) const
{
	return this->_sysName;
}

std::string SysInfo::getHostName(void) const
{
	return this->_hostName;
}

std::string SysInfo::getKernelRelease(void) const
{
	return this->_kernelRelease;
}

std::string SysInfo::getKernelBuild(void) const
{
	return this->_kernelBuild;
}

std::string SysInfo::getMachineArch(void) const
{
	return this->_machineArch;
}

std::string SysInfo::getDomaineName(void) const
{
	return this->_domaineName;
}

std::string SysInfo::getTimeAndDate(void) const
{
	return this->_timeAndDate;
}

void SysInfo::upadteTimeAndDate(void)
{
	std::time_t timeStamp = std::time(nullptr);
	
	this->_timeAndDate = std::asctime(std::localtime(&timeStamp));	
}

SysInfo::~SysInfo(void)
{}