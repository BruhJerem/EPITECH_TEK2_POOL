//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d17
// File description:
//
//

#ifndef CPP_D17_ONETIME_HPP
#define CPP_D17_ONETIME_HPP


#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod
{
public:
    OneTime(const std::string &s);
    void encryptChar(char plainchar);
    void decryptChar(char cipherchar);
    void reset();

private:
    std::string _key;
    int _pos;
};


#endif //CPP_D17_ONETIME_HPP
