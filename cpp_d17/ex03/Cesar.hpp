//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#ifndef CPP_D17_CESAR_HPP
#define CPP_D17_CESAR_HPP


#include <algorithm>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod
{
public:
    Cesar();

    void encryptChar(char plainchar);
    void decryptChar(char cipherchar);
    void reset();

private:
    int countEncrypt;
};


#endif //CPP_D17_CESAR_HPP
