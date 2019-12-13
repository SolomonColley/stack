/// <summary>
/// FullStackException logic error class for handling exceptions
/// caused by a stack being full. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: FullStackException.h
/// Since: 12/12/2019
/// See <see cref="FullStackException.cpp"/> for function definitions.

#pragma once

#include <stdexcept>
#include <string>

class FullStackException : public std::logic_error
{
public:
	FullStackException(const std::string& message);
}; // end FullStackException
