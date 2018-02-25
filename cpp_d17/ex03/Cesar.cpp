//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#include <iostream>
#include <algorithm>
#include "Cesar.hpp"


void Cesar::encryptChar(char plainchar)
{
	if (isalpha(plainchar)) {
		int b = plainchar <= 96 ? 65 : 97;
		plainchar = static_cast<char>(
			(plainchar - b + countEncrypt) % 26 + b);
	}
	countEncrypt= (countEncrypt + 1) % 26;
	std::cout << plainchar;
}

void Cesar::decryptChar(char cipherchar)
{
	if (isalpha(cipherchar)) {
		int b = cipherchar <= 96 ? 90 : 122;
		cipherchar = static_cast<char>(
			(cipherchar - b - countEncrypt) % 26 + b);
	}
	countEncrypt = (countEncrypt + 1) % 26;
	std::cout << cipherchar;
}

void Cesar::reset()
{
	this->countEncrypt = 3;
}
Cesar::Cesar() : countEncrypt(3)
{}