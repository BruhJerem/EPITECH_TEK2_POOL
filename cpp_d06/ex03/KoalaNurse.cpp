/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include <fstream>
#include "KoalaNurse.hpp"
#include "SickKoala.hpp"

KoalaNurse:: KoalaNurse(int ID) {
	this->ID = ID;
	this->isWorking=false;
}

KoalaNurse::~KoalaNurse() {
	std::cout << "Nurse " << this->ID << ": Finally some rest!\n";
}

void KoalaNurse :: giveDrug(std::string Drug, SickKoala *Koala)
{
	Koala->takeDrug(Drug);
}

std::string KoalaNurse :: readReport(std::string filename)
{
	std::ifstream in_stream(filename);
	std::string Drugs;
	std::size_t pos = filename.find(".report");
	std::string patientName = filename.substr(0, pos);

	if (in_stream.fail()) {
		Drugs = "";
	} else {
		std::string line;

		while (std::getline(in_stream, line)) {
			Drugs += line;
		}
	}
	std::cout << "Nurse " << this->ID<<": Kreog! Mr."<< patientName
		  << " needs a "<< Drugs <<"!\n";
	return (Drugs);
}

void KoalaNurse :: timeCheck()
{
	if (this->isWorking == false) {
		std::cout << "Nurse " << this->ID << ": Time to get to work!\n";
		this->isWorking = true;
	} else {
		std::cout<< "Nurse " << this->ID
			 << ": Time to go home to my eucalyptus forest!\n";
		this->isWorking = false;
	}
}