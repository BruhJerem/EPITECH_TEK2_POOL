/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include <iostream>
#include <fstream>
#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
	this->name = name;
	this->isWorking = false;
	std::cout<<"Dr." << this->name << ": I'm Dr." << this->name <<"! How do you kreog?\n";
}

KoalaDoctor::~KoalaDoctor()
{

}

void KoalaDoctor::diagnose(SickKoala *koala)
{
	std::string filename = koala->getName() + ".report";
	std::cout<<"Dr."<< this->name << ": So what's goerking you Mr." << koala->name<<"\n";
	koala->poke();
	std::ofstream outfile (filename, std::ofstream::out);
	std::string tab[5] = {"mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};

	outfile << tab[rand()%5] << std::endl;
}

void KoalaDoctor::timeCheck()
{
	if (this->isWorking == false) {
		std::cout << "Dr." << this->name << ": Time to get to work!\n";
		this->isWorking = true;
	} else {
		std::cout<< "Dr." << this->name
			 << ": Time to go home to my eucalyptus forest!\n";
		this->isWorking = false;
	}
}

std::string KoalaDoctor::getName()
{
	return (this->name);
}