//                                                                                                      
// EPITECH PROJECT, 2018
// Project
// File description:
//
//

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
	this->_stability = true;
}

WarpSystem::QuantumReactor::QuantumReactor(bool stable=true)
{
	this->_stability = stable;
}

bool WarpSystem::QuantumReactor::isStable()
{
	return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
	this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *reactor)
{
	this->_coreReactor = reactor;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
	return (this->_coreReactor);
}