//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#ifndef CPP_D15_EX06_HPP
#define CPP_D15_EX06_HPP

#include <iostream>
#include <sstream>

template <typename T, typename U>
class Tuple
{
public:
    T a;
    U b;
    std::string toString();
};

template <typename T>
static void OsstreamHandling(T &variable, std::ostringstream &ss)
{
	std::string typeName[3] = {typeid(int).name(), typeid(float).name(),
				   typeid(std::string).name()};
	std::string messageType[3] = {"int:", "float:", "string:\""};
	bool enter = false;
	for (int i = 0; i < 3; ++i) {
		if (typeName[i] == typeid(variable).name()) {
			ss << messageType[i] << variable;
			if (i == 2)
				ss << "\"";
			if (i == 1)
				ss << "f";
			enter = true;
			break;
		}
	}
	if (!enter)
		ss << "???";
}

template<typename T, typename U>
std::string Tuple<T, U>::toString()
{
	std::ostringstream ss;
	ss << "[TUPLE [";
	OsstreamHandling(this->a, ss);
	ss << "] [";
	OsstreamHandling(this->b, ss);
	ss << "]]";
	return ss.str();
}

#endif //CPP_D15_EX06_HPP