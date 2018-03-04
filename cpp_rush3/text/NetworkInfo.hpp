//
// EPITECH PROJECT, 2018
// CPP_RUSH3
// File description:
// 
//

#ifndef NETWORKINFO_HPP_
#define NETWORKINFO_HPP_

#include <iostream>
#include <vector>
#include <map>

class NetWorkInfo
{
public :

	NetWorkInfo(void);
	~NetWorkInfo(void);

	void epur(std::string &);
	std::vector<std::string> split(std::string, std::string);
	std::vector<unsigned long long> splitLong(std::string, std::string);
	std::map<std::string, std::vector<unsigned long long>> parseNetWorkInfo(void);
	void refreshNetWorkInfo(void);

protected :
	
private :

	unsigned int _stockBandWith;
	unsigned int _bandWith;

	unsigned int _RBytes;
	unsigned int _RPackets;
	unsigned int _RErrs;

	unsigned int _TBytes;
	unsigned int _TPackets;
	unsigned int _TErrs;

};

#endif /* !NETWORKINFO_HPP_ */
