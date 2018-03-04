//
// EPITECH PROJECT, 2018
// CPP_RUSH3
// File description:
// 
//


#ifndef SYSINFO_HPP_
#define SYSINFO_HPP_

#include <iostream>

class SysInfo
{
public :

	SysInfo(void);
	~SysInfo(void);

	std::string getSysName(void) const;
	std::string getHostName(void) const;
	std::string getKernelRelease(void) const;
	std::string getKernelBuild(void) const;
	std::string getMachineArch(void) const;
	std::string getDomaineName(void) const;
	std::string getTimeAndDate(void) const;

	void upadteTimeAndDate(void);

protected :
	
private :

	std::string _sysName;
	std::string _hostName;
	std::string _kernelRelease;
	std::string _kernelBuild;
	std::string _machineArch;
	std::string _domaineName;
	std::string _timeAndDate;

};

#endif /* !SYSINFO_HPP_ */
