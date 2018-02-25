//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d13
// File description:
//
//

#ifndef CPP_D13_TOY_HPP
#define CPP_D13_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy
{
public:
    class Error
    {
    public:
	enum ErrorType {
	    UNKNOWN,
	    PICTURE,
	    SPEAK
	};

	ErrorType type;
	Error();
	std::string what();
	std::string where();
	void setType(ErrorType type);

    protected:
	std::string _what;
	std::string _where;
    };
    enum ToyType {
	BASIC_TOY,
	ALIEN,
	BUZZ,
	WOODY
    };
    Toy();
    Toy(const ToyType &_type, const std::string &_name, const std::string &_file);

    ToyType getType();
    std::string getName()const;
    void setName(const char *name);
    bool setAscii(const std::string &data);
    void setAsciiFromString(const std::string &data);
    std::string getAscii()const;
    Toy &operator=(const Toy &toy);
    Toy &operator<<(const std::string &data);

    virtual bool speak(const std::string statement);
    virtual bool speak_es(const std::string statement);

    Error getLastError();
protected:
    ToyType _type;
    std::string _name;
    Picture _picture;
    Error _error;
};

std::ostream &operator<<(std::ostream &s, const Toy &toy);

#endif //CPP_D13_TOY_HPP
