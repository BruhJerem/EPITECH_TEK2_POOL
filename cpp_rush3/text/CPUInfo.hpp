//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_rush3
// File description:
//
//

#ifndef CPP_RUSH3_CPUINFO_HPP
#define CPP_RUSH3_CPUINFO_HPP

#include <map>
#include <iostream>
#include <vector>

class CPUInfo
{
private:
	unsigned int _num;
    	std::map<std::string, double> _activity;
    	std::string _freq;
    	std::string _name;

    	void epur(std::string &s);
    	std::map<std::string, double> getCPULoad();
    	std::string getProcessorName();
    	std::vector<unsigned long long> splitLong(std::string str, std::string delimiter);
    	std::vector<std::string> split(std::string str, std::string delimiter);
    	std::string getFrequencyFromName();
public:
    	CPUInfo();
    	unsigned int getNumber()const;
    	std::map<std::string, double> getActivity()const;
    	std::string getFrequence()const;
    	std::string getName()const;
	void refresh();
	std::vector<double> getVectorCPU();
};


#endif //CPP_RUSH3_CPUINFO_HPP
