/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#ifndef CPP_D06_SICKKOALA_H
# define CPP_D06_SICKKOALA_H

#include <iostream>

class SickKoala {
	public:
	std::string name;

	SickKoala(std::string);
    	~SickKoala();
	void poke();
	bool takeDrug(std::string);
	void overDrive(std::string);
    	std::string getName();
};

#endif /* CPP_D06_SICKKOALA_H */
