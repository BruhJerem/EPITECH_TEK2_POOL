//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d08
// File description:
//
//

#include "DroidMemory.hpp"

/* Comparator Print */

std::ostream& operator << (std::ostream& s, const DroidMemory& curr)
{
	s << "DroidMemory '"<< curr.getFingerPrint()
	  << "', "<< curr.getExp();
	return s;
}

/* Comparator in Class */

DroidMemory& DroidMemory::operator << (const DroidMemory& curr)
{
	this->_exp += curr._exp;
	this->_FingerPrint ^= curr._FingerPrint;
	return *this;
}

const DroidMemory &DroidMemory::operator >> (DroidMemory &curr) const
{
	curr._exp += this->_exp;
	curr._FingerPrint ^= this->_FingerPrint;
	return curr;
}

DroidMemory &DroidMemory::operator +=(const DroidMemory &curr)
{
	this->_exp += curr._exp;
	this->_FingerPrint ^= curr._FingerPrint;
	return *this;
}

DroidMemory& DroidMemory::operator +=(std::size_t exp)
{
	DroidMemory curr;
	curr._exp = exp;
	curr._FingerPrint = exp;
	this->_exp += curr._exp;
	this->_FingerPrint ^= curr._FingerPrint;
	return *this;
}

DroidMemory& DroidMemory::operator+(const DroidMemory &curr) const
{
	DroidMemory *tmp = new DroidMemory();
	tmp->_exp = this->_exp + curr._exp;
	tmp->_FingerPrint = this->_FingerPrint ^ curr._FingerPrint;
	return *tmp;
}

DroidMemory& DroidMemory::operator+(std::size_t exp) const
{
	DroidMemory curr;
	curr._exp = exp;
	curr._FingerPrint = exp;

	DroidMemory *tmp = new DroidMemory();
	tmp->_exp = this->_exp + curr._exp;
	tmp->_FingerPrint = this->_FingerPrint ^ curr._FingerPrint;
	return *tmp;
}

/* Constructor */

DroidMemory::DroidMemory() : _exp(0)
{
	this->_FingerPrint = random();
}

/* Destructor */

DroidMemory::~DroidMemory()
{

}

/* Set */

void DroidMemory::setExp(std::size_t exp)
{
	this->_exp = exp;
}

void DroidMemory::setFingerPrint(std::size_t finger)
{
	this->_FingerPrint = finger;
}

/* Get */

std::size_t DroidMemory::getExp() const
{
	return this->_exp;
}

std::size_t DroidMemory::getFingerPrint() const
{
	return this->_FingerPrint;
}