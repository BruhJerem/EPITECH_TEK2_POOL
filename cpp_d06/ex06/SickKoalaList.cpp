/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include <iostream>
#include "SickKoalaList.hpp"
#include "SickKoala.hpp"

SickKoalaList::SickKoalaList(SickKoala *Koala)
{
	this->koala = Koala;
	this->next = NULL;
}

bool SickKoalaList::isEnd()
{
	if (this->next)
		return (false);
	return (true);
}

void SickKoalaList::append(SickKoalaList *Koala)
{
	(void)Koala;
	if (this->isEnd()) {
		this->next = next;
	} else {
		this->next->append(next);
	}
}

SickKoala *SickKoalaList::getFromName(std::string Name)
{
	if (this->koala && this->koala->getName() == Name) {
		return (this->koala);
	} else if (this->next) {
		return (this->next->getFromName(Name));
	}
	return (NULL);
}


SickKoalaList *SickKoalaList::remove(SickKoalaList *remove)
{
	SickKoalaList *previous = NULL;
	SickKoalaList *current = this;

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

SickKoalaList *SickKoalaList::removeFromName(std::string remove)
{
	SickKoalaList *previous = NULL;
	SickKoalaList *current = this;

	for (int i = 0; current ; ++i) {
		if (current && current->koala && current->koala->getName() == remove) {
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

SickKoala *SickKoalaList::getContent()
{
	return (this->koala);
}

SickKoalaList *SickKoalaList::getNext()
{
	return (this->next);
}

void SickKoalaList::dump() {
	std::cout << "Patients : ";
	SickKoalaList *current = this;
	while (current) {
		if (this->koala) {
			std::cout << current->koala->getName();
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