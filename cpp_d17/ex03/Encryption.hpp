//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#ifndef CPP_D17_ENCRYPTION_HPP
#define CPP_D17_ENCRYPTION_HPP

#include <iostream>
#include "IEncryptionMethod.hpp"

class Encryption
{
public:
    Encryption(IEncryptionMethod &method, void (IEncryptionMethod::*pFunction)(char));
    void operator()(char c);
    static void  encryptString(IEncryptionMethod &encryptionMethod ,
			       const std::string &toEncrypt);

    static void decryptString(IEncryptionMethod& encryptionMethod ,
			      const std::string &toDecrypt);

private:

    void (IEncryptionMethod::*_pMethod)(char);
    IEncryptionMethod &_method;
};


#endif //CPP_D17_ENCRYPTION_HPP
