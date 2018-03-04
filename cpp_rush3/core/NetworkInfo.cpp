//
// EPITECH PROJECT, 2018
// CPP_RUSH3
// File description:
// 
//

#include "NetworkInfo.hpp"

#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <fstream>
#include <map>

NetWorkInfo::NetWorkInfo(void)
{
	std::map<std::string, std::vector<unsigned long long>> netMap = parseNetWorkInfo();
	_stockBandWith = netMap["wlp2s0"][0];
	refreshNetWorkInfo();
}

NetWorkInfo::~NetWorkInfo(void)
{}

void NetWorkInfo::refreshNetWorkInfo(void)
{
	std::map<std::string, std::vector<unsigned long long>> netMap = parseNetWorkInfo();

	_bandWith -= _stockBandWith;;
	std::cout << "test : " << _bandWith << std::endl;
	_RBytes = netMap["wlp2s0"][0];
	_RPackets = netMap["wlp2s0"][1];
	_RErrs = netMap["wlp2s0"][2];
	_TBytes = netMap["wlp2s0"][8];
	_TPackets = netMap["wlp2s0"][9];
	_TErrs = netMap["wlp2s0"][10];
}

void NetWorkInfo::epur(std::string &s)
{
	bool space = false;
	auto p = s.begin();
	for (auto ch : s)
		if (std::isspace(ch)) {
			space = p != s.begin();
		} else {
			if (space) *p++ = ' ';
			*p++ = ch;
			space = false; }
	s.erase(p, s.end());
}

std::vector<std::string> NetWorkInfo::split(std::string str, std::string delimiter)
{
	size_t pos = 0;
	std::string token;
	std::vector<std::string> tab;

	while ((pos = str.find(delimiter)) != std::string::npos) {
		token = str.substr(0, pos);
		tab.push_back(token);
		str.erase(0, pos + delimiter.length());
	}

	tab.push_back(str);
	return tab;
}

std::vector<unsigned long long> NetWorkInfo::splitLong(std::string str, std::string delimiter)
{
	size_t pos = 0;
	std::string token;
	std::vector<unsigned long long> tab;
	epur(str);
	int i = 0;
	while ((pos = str.find(delimiter)) != std::string::npos && i != 15) {
		token = str.substr(0, pos);
		tab.push_back(std::stoull(token));
		str.erase(0, pos + 1);
		i++;
	}
	tab.push_back(std::stoull(str));
	return tab;
}

std::map<std::string, std::vector<unsigned long long>> NetWorkInfo::parseNetWorkInfo(void)
{
	std::ifstream file("/proc/net/dev");
	std::vector<std::string> tmp;
	std::map<std::string, std::vector<unsigned long long>> netMap;
	std::string s;

	std::getline(file,s);
	std::getline(file,s);

	while (std::getline(file,s)) {
		epur(s);
		tmp = split(s, ":");
		//std::cout << s << std::endl;
		netMap[tmp[0]] = splitLong(tmp[1], " ");
	}	
	return netMap;
}

int main()
{
	NetWorkInfo test;

	return 0;
}
