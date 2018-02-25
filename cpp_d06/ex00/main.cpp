//
// EPITECH PROJECT, 2018
// main
// File description:
// ex00
//

#include <iostream>
#include <fstream>

int read_file(char *binary_name, char *av)
{
	std::ifstream in_stream(av);

	if (in_stream.fail()) {
		std::cout << binary_name << ": "<< av << ": No such file or directory" << std::endl;
	} else {
		std::string line;

		while (std::getline(in_stream, line)) {
			std::cout << line;
		}
	}
	return (0);
}

int main(int ar, char **av)
{
	(void)ar;
	if (av[1] == NULL) {
		std::cout << &av[0][2] <<": Usage: ./ my_cat file [...]\n";
	} else {
		for (int i=1; av[i] != NULL; i++) {
			read_file(&av[0][2], av[i]);
		}
	}
	return (0);
}
