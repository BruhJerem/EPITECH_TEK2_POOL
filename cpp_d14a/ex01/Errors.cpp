//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d14a
// File description:
//
//

#include <exception>
#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component)
noexcept
: std::exception()
{
	this->_message = message;
	this->_component = component;
}

std::string const &NasaError::getComponent() const
{
	return this->_component;
}

const char * NasaError::what() const noexcept
{
	return this->_message.c_str();
}

MissionCriticalError::MissionCriticalError(std::string const &message,
					   const std::string &component)
	: NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(std::string const &message,
				     const std::string &component) : NasaError(
	message, component)
{
}

UserError::UserError(std::string const &message, const std::string &component)
	: NasaError(message, component)
{
}

CommunicationError::CommunicationError(std::string const &message)
	: NasaError(message, "CommunicationDevice")
{
}
