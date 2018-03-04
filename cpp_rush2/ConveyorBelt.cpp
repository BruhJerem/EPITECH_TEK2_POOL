/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#include "Object.hpp"
#include "Elf.hpp"
#include "ConveyorBelt.hpp"
#include "Table.hpp"
#include "Wrap.hpp"
#include "PapaXmasTable.hpp"


ConveyorBelt::ConveyorBelt()
{
}

ConveyorBelt::~ConveyorBelt()
{
}

ConveyorBelt::ConveyorBelt(ConveyorBelt *copy)
{
	(void)copy;
}

/* Function return True if Is IN Button */
bool ConveyorBelt::isInButton()
{
	return this->Button == IN;
}

/* Function that add the Object from the wrap to the Table with the Input of ConveyorBelt*/
bool ConveyorBelt::addObjectToTable(Table *table, Object *object)
{
	return table->addObjectToTable(object) != -1;
}

/* INPUT PART : FROM ELVES TO TABLE */
void ConveyorBelt::setObjectFromElves(Object *object)
{
	this->_inputObject = object;
}

IConveyorBelt *ConveyorBelt::createConveyorBelt() const
{
	return new ConveyorBelt;
}

/* OUTPUT PART : FROM TABLE TO SANTA */

/* Santa will call this function to get the actual object waiting on the ConveyorBelt */
Object *ConveyorBelt::giveObjectToSanta()
{
	return this->_outputObject;
}

void ConveyorBelt::takeObjectForOutput()
{
	this->_inputObject = this->_outputObject;
}

void ConveyorBelt::pushObjectToSanta(Table *table, PapaXmasTable *santa, int iterator)
{
	santa->addObjectToTable(table->getObjectArray()[iterator]);
}

void ConveyorBelt::setObjectToOutput(Object *object)
{
	this->_outputObject = object;
}

void ConveyorBelt::setButton(ConveyorBelt::PressButton button)
{
	this->Button = button;
}
