//
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#ifndef CPP_D07A_PARTS_HPP
#define CPP_D07A_PARTS_HPP

#include <iostream>

class Arms
    {
    private:
	std::string _name;
	std::string _serial;
	bool _functional;

    public:
	Arms(std::string serial = "H-01", bool functional=true);
	bool isFunctionnal();
	std::string serial();
	void informations();
    };

    class Legs
    {
    private:
	std::string _name;
	std::string _serial;
	bool _functional;

    public:
	Legs(std::string serial="L-01", bool functional = true);
	bool isFunctionnal();
	std::string serial();
	void informations();
    };

    class Head
    {
    private:
	std::string _name;
	std::string _serial;
	bool _functional;

    public:
	Head(std::string serial = "H-01", bool functional = true);
	bool isFunctionnal();
	std::string serial();
	void informations();
    };


#endif //CPP_D07A_PARTS_HPP
