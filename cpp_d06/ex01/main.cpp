/*
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
#include <iomanip>
#include <algorithm>

int main()
{
	std::string input, temp;
	std::stringstream sstm;
	float degrees;

	getline(std::cin, input);
	sstm << input;
	sstm >> degrees;
	sstm >> temp;
	std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
	if (temp == "celsius") {
		float fahren = (degrees * 1.8) + 32;
		std::cout << std::setw(16) << std::fixed << std::setprecision(3)
			  << fahren << std::setw(16) << "Fahrenheit" << std::endl;
	} else if (temp == "fahrenheit") {
		float celsius = (degrees - 32) / 1.8;
		std::cout << std::setw(16) << std::fixed << std::setprecision(3)
			  << celsius << std::setw(16) << "Celsius" << std::endl;
	} else {
		std::cerr << "Please enter valid scale\n";
	}
	return (0);
}