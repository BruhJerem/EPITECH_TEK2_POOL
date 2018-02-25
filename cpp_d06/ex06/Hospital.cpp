//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d06
// File description:
//
//

#include "Hospital.hpp"

KoalaNurseList *nurseList;
KoalaDoctorList *doctorList;
SickKoalaList *sickKoalaList;

void Hospital::addDoctor(KoalaDoctorList *doctorList)
{
	while (this->doctorList) {
		this->doctorList = this->doctorList->next;
	}
	this->doctorList = doctorList;
	this->doctorList->next = NULL;
	std::cout << "[HOSPITAL] Doctor "<< doctorList->doctor->name <<" just arrived!\n";
	this->doctorList->doctor->timeCheck();
}

void Hospital::addNurse(KoalaNurseList *nurseList)
{
	while (this->nurseList) {
		this->nurseList = this->nurseList->next;
	}
	this->nurseList = nurseList;
	this->nurseList->next = NULL;
	std::cout << "[HOSPITAL] Nurse "<< nurseList->nurse->ID <<" just arrived!\n";
	this->nurseList->nurse->timeCheck();
}

void Hospital::addSick(SickKoalaList *sickKoalaList)
{
	while (this->sickKoalaList) {
		this->sickKoalaList = this->sickKoalaList->next;
	}
	this->sickKoalaList = sickKoalaList;
	this->sickKoalaList->next = NULL;
	std::cout << "[HOSPITAL] Patient "<< sickKoalaList->koala->name <<" just arrived!\n";
}

bool Hospital::areDocAtWork()
{
	KoalaDoctorList *currentDoc = this->doctorList;
	while (currentDoc) {
		if (currentDoc->doctor->isWorking == false)
			return (false);
		currentDoc = currentDoc->next;
	}
	return (true);
}

void Hospital::run()
{
	KoalaDoctorList *currentDoc = this->doctorList;
	KoalaNurseList *currentNurse = this->nurseList;
	SickKoalaList *currentSick = this->sickKoalaList;

	if (areDocAtWork()) {
		std::cout << "[HOSPITAL] Work starting with:\n";
		currentDoc->dump();
		currentNurse->dump();
		currentSick->dump();
		std::cout<<std::endl;
	}

	for (int i = 0; currentSick; i++) {
		currentDoc->doctor->diagnose(currentSick->koala);
		currentSick->koala->poke();
		currentNurse->nurse->readReport(currentSick->koala->name+".report");
		if (!currentDoc->next)
			currentDoc = this->doctorList;
		else
			currentDoc = currentDoc->next;
		if (!currentNurse->next)
			currentNurse = this->nurseList;
		else
			currentNurse = this->nurseList;
		currentSick = currentSick->next;
	}
	currentDoc = NULL;
	currentNurse = NULL;
	currentSick = NULL;
}