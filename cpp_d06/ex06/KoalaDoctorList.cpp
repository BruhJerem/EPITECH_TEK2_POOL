/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *doctor)
{
	this->doctor = doctor;
	this->next = NULL;
}

bool KoalaDoctorList::isEnd()
{
	if (this->next)
		return (false);
	return (true);
}

void KoalaDoctorList::append(KoalaDoctorList *doctor)
{
	(void)doctor;
	if (this->isEnd()) {
		this->next = next;
	} else {
		this->next->append(next);
	}
}

KoalaDoctor* KoalaDoctorList::getFromName(std::string name)
{
	if (this->doctor && this->doctor->getName() == name) {
		return (this->doctor);
	} else if (this->next) {
		return (this->next->getFromName(name));
	}
	return (NULL);
}

KoalaDoctorList* KoalaDoctorList::remove(KoalaDoctorList *remove)
{
	KoalaDoctorList *previous = NULL;
	KoalaDoctorList *current = this;

	for (int i = 0; current ; ++i) {
		if (current == remove) {
			if (previous) {
				previous->next = current->next;
				current->next = NULL;
				return (this);
			} else {
				previous = this->next;
				current->next = NULL;
				return (previous);
			}
			previous = current;
			current = current->next;
		}
	}
	return (NULL);
}

KoalaDoctorList* KoalaDoctorList::removeFromName(std::string remove)
{
	KoalaDoctorList *previous = NULL;
	KoalaDoctorList *current = this;

	for (int i = 0; current ; ++i) {
		if (current && current->doctor && current->doctor->getName() == remove) {
			if (previous) {
				previous->next = current->next;
				current->next = NULL;
				return (this);
			} else {
				previous = this->next;
				current->next = NULL;
				return (previous);
			}
			previous = current;
			current = current->next;
		}
	}
	return (NULL);
}

void KoalaDoctorList::dump()
{
	std::cout << "Doctors : ";
	KoalaDoctorList *current = this;
	while (current) {
		if (this->doctor) {
			std::cout << current->doctor->getName();
		}
		else {
			std::cout << "NULL";
		}
		if (current->next) {
			std::cout << ", ";
		}
		else {
			std::cout << "." << std::endl;
		}
		current = current->next;
	}
}