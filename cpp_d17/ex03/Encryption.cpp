//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#include <iostream>
#include <algorithm>
#include "Encryption.hpp"
#include "IEncryptionMethod.hpp"

Encryption::Encryption(IEncryptionMethod &method
	, void (IEncryptionMethod::*pFunction)(char)): _pMethod(pFunction),
						       _method(method)
{
}

void Encryption::operator()(char c)
{
	(_method.*_pMethod)(c);
}

void Encryption::encryptString(IEncryptionMethod &encryptionMethod,
			       const std::string &toEncrypt)
{
	encryptionMethod.reset();
	std::for_each(toEncrypt.begin(), toEncrypt.end(),
		      [toEncrypt, &encryptionMethod](char c){
	    encryptionMethod.encryptChar(c);
	});
	std::cout << std::endl;
}

void Encryption::decryptString(IEncryptionMethod &encryptionMethod,
			       const std::string &toDecrypt)
{
	encryptionMethod.reset();
	std::for_each(toDecrypt.begin(), toDecrypt.end(),
		      [toDecrypt, &encryptionMethod](char c){
	    encryptionMethod.decryptChar(c);
	});
	std::cout << std::endl;
}
