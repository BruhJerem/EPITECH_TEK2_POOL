/*
** EPITECH PROJECT, 2018
** cpp_rush2
** File description :
**
*/

#ifndef CPP_RUSH2_CONVEYORBELT_HPP
#define CPP_RUSH2_CONVEYORBELT_HPP

#include "Table.hpp"
#include "Object.hpp"
#include "IConveyorBelt.hpp"
#include "PapaXmasTable.hpp"

class ConveyorBelt : virtual public IConveyorBelt
{
private:
	Table *_table;
	Object *_inputObject;
	Object *_outputObject;
public:
	ConveyorBelt();
	~ConveyorBelt();

	ConveyorBelt(ConveyorBelt *copy);

	enum PressButton {
	    IN,
	    OUT
	};
	PressButton Button;
	virtual IConveyorBelt *createConveyorBelt() const;
	void addObjectFromTableToConveyorBelt(Object *object);
	bool addObjectToTable(Table *table, Object *object);
	bool isInButton();
	Object *giveObjectToSanta();
	void takeObjectForOutput();
	void setObjectFromElves(Object *object);
	void pushObjectToSanta(Table *table, PapaXmasTable *santa, int iterator);
    	void setObjectToOutput(Object *object);
    	void setButton(PressButton button);
};

#endif //CPP_RUSH2_CONVEYORBELT_HPP
