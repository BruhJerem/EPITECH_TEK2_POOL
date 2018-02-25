//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include "Parser.hpp"

static int arrHandling(std::string &arr, const std::string str,
		       int arr_i, int i)
{
	arr[arr_i] = str[i];
	arr_i++;
	return (arr_i);
}

static int stackHandling(std::string &output, std::string &stack,
			 const std::string str,
		     int output_i, int stack_i, int i)
{
	output[output_i] = stack[stack_i];
	stack[stack_i] = str[i];
	stack_i++;
	return (stack_i);
}

Parser::Parser()
{
	_result =0;
}

Parser::Parser(const Parser &src)
{
	_result = src._result;
	_operands = src._operands;
	_operator = src._operator;
}

void Parser::feed(const std::string &str)
{
	int	i;
	int	output_i;
	int	stack_i;
	std::string output;
	std::string stack;

	i = 0;
	output_i = 0;
	stack_i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			output_i = arrHandling(output, str, output_i, i);
		else if (str[i] == '(')
			stack_i = arrHandling(stack, str, stack_i, i);
		else if (str[i] == '-' || str[i] == '+' || str[i] == '*'
			 || str[i] == '/' || str[i] == '%')
		{
			if (stack.size() == 0 || stack[stack_i] == '(') {
				stack_i = arrHandling(stack, str, stack_i, i);
			}
			stack_i = stackHandling(output, stack, str
				, output_i, stack_i, i);
		}
		i++;
	}
	std::istringstream (output) >> this->_result;
}

int Parser::result() const
{
	return _result;
}

void Parser::reset()
{
	std::stack<std::string> clear;
	this->_operator = clear;
	this->_operands = clear;
	this->_result = 0;
}
