/*
** EPITECH PROJECT, 2018
** Santa
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Santa.hpp"

Santa::Santa(std::string const filename)
{
	std::ifstream file(filename);
	static int i = 0;
	if (file.good()) {
		if (i != 0)
			std::cout << "*~~~~~~~~~~~~~~~~~~~~*" << std::endl;
		std::vector <std::string> arr = getTable(getLineFromXml(filename));
		std::cout << "Santa is opening" << "... "
			  << filename << std::endl;
		std::cout << "The " << filename << " is open and it contains..."
			  << std::endl;
		std::cout << "The name of the gift is : *" << arr[3]
			  << "* and it contains a *" << arr[2] << "*." << std::endl;
		std::cout << "The gift is in the *" << arr[1]
			  << "* which one is wrapping with a *" << arr[0]
			  << "*." << std::endl;
	}
	else
		std::cout << "File: " << filename << " can't be found." << std::endl;
	i++;
}

Santa::~Santa()
{
}

std::string Santa::getLineFromXml(std::string const filename)
{
	std::string new_str;
	std::ifstream file(filename);
	std::string line;

	if (file.is_open()) {
		std::getline(file, line);
		new_str = line.substr(0, line.find("</"));
	}
	return new_str;
}

std::vector <std::string> Santa::getTable(std::string new_str)
{
	std::vector <std::string> arr;
	std::string str;

	for (std::string::iterator it = new_str.begin() ;
	     it != new_str.end() ; it++) {
		if (*it == '>' || *it == ' ') {
			str.erase(remove_if(str.begin(), str.end(),
					    isspace), str.end());
			arr.push_back(str);
			str = "\0";
		}
		while ((it + 1 != new_str.end() && *it == '>') ||
			(it + 1 != new_str.end() && *it == '<'))
			it++;
		str += *it;
	}
	arr[3] = arr[3].substr(arr[3].find("=") + 1);
	arr[3].erase(arr[3].begin());
	arr[3].erase(arr[3].end() -1);
	return arr;
}

int main(int ac, char **av)
{
	if (ac == 1) {
		std::cout << "Usage: ./santa [filename.xml], ..."
			  << std::endl;
		return (0);
	}
	for (int i = 1 ; av[i] != NULL ; ++i) {
		std::string fn = av[i];
		if (fn.substr(fn.find_last_of(".") + 1) == "xml") {
			Santa santa(av[i]);
		}
	}
	return (0);
}
