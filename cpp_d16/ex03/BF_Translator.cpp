//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <ios>
#include "BF_Translator.hpp"

int BF_Translator::translate(const std::string &in, const std::string &out)
{
	std::map<char, std::string> mapT;

	mapT['>'] = "ptr++;";
	mapT['<'] = "ptr--;";
	mapT['+'] = "++(*ptr);";
	mapT['-'] = "--(*ptr);";
	mapT['.'] = "putchar(*ptr);";
	mapT[','] = "(*ptr)=getchar();";
	mapT['['] = "while(*ptr) {";
	mapT[']'] = "}";

	std::ifstream inFile(in);
	std::ofstream outFile(out);

	if(!inFile || !outFile)
		return -1;
	std::string s;
	std::string inFileOutput;
	while (getline(inFile, s)) {
		inFileOutput+=s+"\n";
	}
	inFile.close();
	outFile << "#include <stdio.h>\n\n";
	outFile << "int main() {\nchar array[60000] = {0};\n"
		"char *ptr=array;\n";
	for (int i = 0; inFileOutput[i]!='\0' ; ++i) {
		outFile << mapT[inFileOutput[i]] << "\n";
	}
	outFile << "}";
	outFile.close();
	return 0;
}