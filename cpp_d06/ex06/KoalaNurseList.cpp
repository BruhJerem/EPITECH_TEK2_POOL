/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include "iostream"
#include "KoalaNurseList.hpp"
#include "KoalaNurse.hpp"

KoalaNurseList ::KoalaNurseList(KoalaNurse *nurse)
{
	this->nurse = nurse;
	this->next = NULL;
}

bool KoalaNurseList::isEnd()
{
	if (this->next)
		return (false);
	return (true);
}

void KoalaNurseList::append(KoalaNurseList *nurse)
{
	(void)nurse;
	if (this->isEnd()) {
		this->next = next;
	} else {
		this->next->append(next);
	}
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *remove)
{
	KoalaNurseList *previous = NULL;
	KoalaNurseList *current = this;

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

KoalaNurseList *KoalaNurseList::removeFromID(int id)
{
	KoalaNurseList *previous = NULL;
	KoalaNurseList *current = this;

	for (int i = 0; current ; ++i) {
		if (current && current->nurse && current->nurse->ID == id) {
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

void KoalaNurseList::dump()
{
	std::cout << "Nurses : ";
	KoalaNurseList *current = this;
	while (current) {
		if (this->nurse) {
			std::cout << current->nurse->getID();
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