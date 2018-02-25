//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#include <iostream>
#include "OneTime.hpp"

OneTime::OneTime(const std::string &s)
{
	_key = s;
	_pos = 0;
}

void OneTime::encryptChar(char plainchar)
{
	if (isalpha(plainchar)) {
		int mask_base = this->_key[this->_pos] <= 96 ? 65 : 97;
		int base = plainchar <= 96 ? 65 : 97;
		plainchar = static_cast<char>(
			(plainchar - base + _key[_pos] - mask_base)
			% 26 + base);
	}
	std::cout << plainchar;
	_pos = static_cast<int>((_pos + 1) % this->_key.size());
}

void OneTime::decryptChar(char cipherchar)
{
	if (isalpha(cipherchar)) {
		int mask_base = this->_key[this->_pos] <= 96 ? 65 : 97;
		int base = cipherchar <=  96 ? 90 : 122;
		cipherchar = static_cast<char>(
			(cipherchar - base - _key[_pos] + mask_base)
			% 26 + base);
	}
	std::cout << cipherchar;
	_pos = static_cast<int>((_pos + 1) % this->_key.size());
}

void OneTime::reset()
{
	_pos = 0;
}
