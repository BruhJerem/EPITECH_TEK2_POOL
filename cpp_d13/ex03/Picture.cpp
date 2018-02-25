//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#include <iostream>
#include "Picture.hpp"
#include <ios>
#include <fstream>

Picture::Picture()
{
	this->data = "";
}

Picture::Picture(const std::string &file)
{
	getPictureFromFile(file);
}

bool Picture::getPictureFromFile(const std::string &file)
{
	std::ifstream myfile(file);
	std::string line;
	if (!myfile.fail()){
		while (getline (myfile,line)) {
			this->data += line;
			this->data += "\n";
		}
		myfile.close();
		return true;
	}
	this->data = "ERROR";
	return false;
}

Picture& Picture::operator=(const Picture &pic)
{
	this->data = pic.data;
	return *this;
}