/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include <iostream>
#include "Elf.hpp"

Elf::Elf(std::string name, Table *table)
{
	this->name = name;
	this->table = table;
}

Elf::Elf(Elf &elf)
{
	this->name = elf.name;
	this->table = elf.table;
}

Elf::~Elf(){}

Table *Elf::look()const
{
	std::cout << "* " << this->name << " looking at the table *\n";
	if (this->table != nullptr) {
			std::cout << "'Oh, there is a lot of "
				"shit on my table like:\n'";
		Object **arr = this->table->getObjectArray();
		for (int i = 0; i < this->table->getCurrentNumberObject(); i++) {
			std::cout << arr[i]->getClassName() << std::endl;
		}
	} else {
		std::cout << "'Oh, there is nothing on my shitty table'\n";
	}
	return table;
}

/* Send the current object that is Wrapped to the Belt */

void Elf::sendObjectToBelt(Object *object, ConveyorBelt *belt)
{
	if (belt->isInButton()) {
		std::cout << "Put Tory in the Belt";
		belt->setObjectToOutput(object);
		belt->setButton(belt->OUT);
	} else {
		std::cout << "Button is OUT\n";
	}
}

/* Here Object is going to be Wrapped */

Object *Elf::wrapObject(Object *toy, Object *wrap)
{
	std::cout << "Lets Wrap the " << toy->getClassName()
		  << " with " << wrap->getClassName();
	std::cout << "tuuuut tuuut tuut\n";
	this->table->removeToyAndWrap(toy, wrap);
	toy->setTaken(true);
	return toy;
}

/* Wrap a the first Toy found with First Wrap found */

void Elf::WrapMeTableObject()
{
	if (this->table != nullptr) {
		std::cout << "* " << this->name << " is looking to Wrap a Object "
			"that is on his table *\n";
		Object *Wrap = findWrapOnTable();
		Object *Toy = findToyOnTable();
		if (Wrap != NULL && Toy != NULL)
			wrapObject(Toy, Wrap);

	} else {
		std::cout << "'Oh, there is nothing on my shitty table'\n";
	}
}

/* Find the first Wrap on the table */

Object *Elf::findWrapOnTable() const
{
	if (this->table != nullptr) {
		std::cout << "'Oh, there is a lot of "
			"shit on my table like:\n'";
		Object **arr = this->table->getObjectArray();
		for (int i = 0; i < this->table->getCurrentNumberObject(); i++) {
			if (arr[i]->getClassName() == "Wrap") {
				return arr[i];
			}
		}
		std::cout << "Oh there is no Wrap anymore, "
			"that's bad organisation from your part\n";
	}
	return NULL;
}

/* Find the first Toy found on the Table */

Object *Elf::findToyOnTable() const
{
	if (this->table != nullptr) {
		std::cout << "'Oh, there is a lot of "
			"shit on my table like:\n'";
		Object **arr = this->table->getObjectArray();
		for (int i = 0; i < this->table->getCurrentNumberObject(); i++) {
			if (arr[i]->getClassName() == "Toy") {
				return arr[i];
			}
		}
		std::cout << "Oh there is no Toy anymore, "
			"that's bad organisation from your part\n";
	}
	return NULL;

}