/// <summary>
/// EmptyStackException logic error class for handling exceptions
/// caused by null pointers. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: EmptyStackException.cpp
/// Since: 12/12/2019
/// See <see cref="EmptyStackException.h"/> for function declarations.

#include "EmptyStackException.h"

EmptyStackException::EmptyStackException(const std::string& message)
	: std::logic_error("EmptyStackException: " + message)
{
} // end parameterized constructor
