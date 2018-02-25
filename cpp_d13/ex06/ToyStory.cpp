//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#include <iostream>
#include <ios>
#include <fstream>
#include <vector>
#include "ToyStory.hpp"
#include "Toy.hpp"

static std::vector<std::string> split(std::string str, std::string delimiter)
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

static void printError(Toy &toy)
{
	auto e = toy.getLastError();
	std::cout << e.where() << ": "
		  << e.what() << std::endl;
}

static bool handlingInFile(Toy &toy, std::vector<std::string> tab,
			   bool (Toy::* func)(const std::string str),
			   std::string line)
{
	if (tab[0] == "picture") {
		if (!toy.setAscii(tab[1])) {
			printError(toy);
			return false;
		}
		std::cout << toy.getAscii()
			  << std::endl;
	} else {
		if (!(toy.*func)(line)) {
			printError(toy);
			return false;
		}
	}
	return true;
}

void ToyStory::tellMeAStory(std::string const &filename, Toy &toy1,
			    bool (Toy::* func1)(const std::string str1),
			    Toy &toy2,
			    bool (Toy::* func2)(const std::string str2))
{
	std::cout << toy1.getAscii() << std::endl;
	std::cout << toy2.getAscii() << std::endl;

	std::ifstream openFile(filename);
	std::string line;
	if (!openFile.fail()) {
		int i=0;
		while (std::getline(openFile, line)) {
			//std::cout << line << std::endl;
			std::vector<std::string> tab = split(line, ":");
			if (i % 2 == 0) {
				if (!(handlingInFile(toy1, tab, func1, line)))
					break;
			} else {
				if (!(handlingInFile(toy2, tab, func2, line)))
					break;
				}
			i++;
		}
		openFile.close();
	} else {
		std::cout << "Bad Story\n";
	}
}
