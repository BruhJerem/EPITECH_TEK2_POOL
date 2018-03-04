//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_rush3
// File description:
//
//

#include <thread>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <cstdint>
#include <cstring>
#include <vector>
#include <map>
#include <cpuid.h>
#include "CPUInfo.hpp"

void CPUInfo::epur(std::string &s)
{
	bool space = false;
	auto p = s.begin();
	for (auto ch : s)
		if (std::isspace(ch)) {
			space = p != s.begin();
		} else {
			if (space)
				*p++ = ' ';
			*p++ = ch;
			space = false;
		}
	s.erase(p, s.end());
}

std::vector<unsigned long long> CPUInfo::splitLong(std::string str, std::string delimiter)
{
	size_t pos = 0;
	std::string token;
	std::vector<unsigned long long> tab;

	while ((pos = str.find(delimiter)) != std::string::npos) {
		token = str.substr(0, pos);
		tab.push_back(std::stoull(token));
		str.erase(0, pos + delimiter.length());
	}
	tab.push_back(std::stoull(str));
	return tab;
}

std::vector<std::string> CPUInfo::split(std::string str, std::string delimiter)
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

static double calculateThat(std::vector<unsigned long long> cpuTotal)
{
	unsigned long long total;
	double percent;

	int i;
	for (i = 0; i < 3; ++i) {
		total += cpuTotal[i];
	}
	percent = total;
	total += cpuTotal[i];
	percent /= total;
	percent *= 100;
	return percent;
}

std::map<std::string, double> CPUInfo::getCPULoad()
{
	std::vector<std::string> tab;
	std::map<std::string, double> percentMap;

	std::ifstream file("/proc/stat");
	std::string s;
	while (std::getline(file,s)) {
		epur(s);
		if (strncmp(s.c_str(), "cpu", 3) == 0) {
			epur(s);
			tab.push_back(s);
		}
	}
	file.close();
	for (unsigned int i = 0; i < tab.size(); ++i) {
		std::string s = split(tab[i], " ")[0];
		std::vector<unsigned long long> cpuTotal = splitLong(&tab[i][5], " ");
		percentMap[s] = calculateThat(cpuTotal);
	}
	return percentMap;

}

std::string CPUInfo::getProcessorName()
{
	std::ifstream file("/proc/cpuinfo");
	std::string buf;
	std::string s;

	while(std::getline(file, buf)) {
		if (strncmp(buf.c_str(), "model name", 10) == 0) {
			epur(buf);
			file.close();
			s = &split(buf, ":")[1][1];
			return split(s, "@")[0];
		}
	}
	file.close();
	return NULL;
}

std::string CPUInfo::getFrequencyFromName()
{
	std::ifstream file("/proc/cpuinfo");
	std::string buf;

	while(std::getline(file, buf)) {
		if (strncmp(buf.c_str(), "model name", 10) == 0) {
			epur(buf);
			file.close();
			return &split(buf, "@")[1][1];
		}
	}
	file.close();
	return NULL;
}

void CPUInfo::refresh()
{
	this->_num = std::thread::hardware_concurrency();
	this->_activity = getCPULoad();
	this->_name = getProcessorName();
	this->_freq = getFrequencyFromName();
}

CPUInfo::CPUInfo()
{
	this->_num = std::thread::hardware_concurrency();
	this->_activity = getCPULoad();
	this->_name = getProcessorName();
	this->_freq = getFrequencyFromName();
}

std::vector<double> CPUInfo::getVectorCPU()
{
	std::vector<double> arr;

	std::string str = "cpu";
	arr.push_back(this->getActivity()[str]);
	for (unsigned int i = 1; i != this->getActivity().size() ; i++) {
		str+=i - 1 + '0';
		arr.push_back(this->getActivity()[str]);
		str.erase(3);
	}

	return arr;
}

unsigned int CPUInfo::getNumber() const
{
	return _num;
}

std::map<std::string, double> CPUInfo::getActivity() const
{
	return _activity;
}

std::string CPUInfo::getFrequence() const
{
	return _freq;
}

std::string CPUInfo::getName() const
{
	return _name;
}
