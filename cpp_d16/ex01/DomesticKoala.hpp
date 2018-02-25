//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#ifndef CPP_D16_DOMESTICKOALA_HPP
#define CPP_D16_DOMESTICKOALA_HPP


#include <vector>
#include <iostream>
#include "KoalaAction.hpp"


class DomesticKoala
{

public:
    DomesticKoala(KoalaAction &);
    ~DomesticKoala();
    DomesticKoala(const DomesticKoala &);
    DomesticKoala &operator=(const  DomesticKoala &);

    using methodPointer_t = void (KoalaAction::*)(const std::string &);
    const std::vector<methodPointer_t> *getActions() const;
    void learnAction(unsigned char command , methodPointer_t action);

    void unlearnAction(unsigned char command);
    void doAction(unsigned char command , const std::string &param);
    void setKoalaAction(KoalaAction &);

private:
    KoalaAction _action;
    std::vector<unsigned char> _command;
    std::vector<methodPointer_t> *_next;
};


#endif //CPP_D16_DOMESTICKOALA_HPP
