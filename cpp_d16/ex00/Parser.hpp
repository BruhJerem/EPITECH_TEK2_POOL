//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#ifndef CPP_D16_PARSER_HPP
#define CPP_D16_PARSER_HPP

#include <iostream>
#include <stack>

class Parser
{
private:
    std::stack<std::string> _operands;
    std::stack<std::string> _operator;
    int _result;

public:
    Parser();
    Parser(const Parser &src);
    void feed(const std::string &s);
    int result() const;
    void reset();
    void run(const std::string&);

};


#endif //CPP_D16_PARSER_HPP
