/*
** EPITECH PROJECT, 2018
** Santa
** File description:
** Created by valentin.ichkour@epitech.eu
*/

#ifndef CPP_RUSH2_SANTA_HPP
#define CPP_RUSH2_SANTA_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <vector>

class Santa
{
private:

public:
	Santa(std::string const filename);
	~Santa();

	std::vector <std::string>  getTable(std::string const filename);
	void getArrayForBox(std::vector <std::string> arr);
	std::string getLineFromXml(std::string new_str);
};

#endif //CPP_RUSH2_SANTA_HPP
