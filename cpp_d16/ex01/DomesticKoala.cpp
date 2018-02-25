//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d16
// File description:
//
//

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &koala)
{
	this->_action=koala;
	this->_next = new std::vector<methodPointer_t>;
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala::DomesticKoala(const DomesticKoala &domesticKoala)
{
	this->_action = domesticKoala._action;
	this->_next = domesticKoala._next;
	this->_command = domesticKoala._command;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &domesticKoala)
{
	this->_action = domesticKoala._action;
	this->_next = domesticKoala._next;
	this->_command = domesticKoala._command;
	return *this;
}

const std::vector<DomesticKoala::methodPointer_t> *DomesticKoala::getActions() const
{
	return this->_next;
}

void DomesticKoala::learnAction(unsigned char command,
				DomesticKoala::methodPointer_t action)
{
	this->_command.push_back(command);
	this->_next->push_back(action);
}


void DomesticKoala::unlearnAction(unsigned char command)
{
	int j=0;
	for (auto i : this->_command) {
		if (i == command){
			this->_next->erase(this->_next->begin()+j);
			this->_command.erase(this->_command.begin()+j);
		}
		j++;
	}
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
	int j=0;
	for (auto i : this->_command) {
		if (i == command){
			methodPointer_t toCall;
			toCall = this->_next->at(j);
			(this->_action.*toCall)(param);
		}
		j++;
	}
}

void DomesticKoala::setKoalaAction(KoalaAction &action)
{
	this->_action = action;
	auto *clean = new std::vector<methodPointer_t>;
	this->_next = clean;
	std::vector<unsigned char> cleanChar;
	this->_command = cleanChar;
}