/// <summary>
/// EmptyStackException logic error class for handling exceptions
/// caused by an empty stack. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: EmptyStackException.h
/// Since: 12/12/2019
/// See <see cref="EmptyStackException.cpp"/> for function definitions.

#pragma once

#include <stdexcept>
#include <string>

class EmptyStackException : public std::logic_error
{
public:
	EmptyStackException(const std::string& message = "");
}; // end EmptyStackException
