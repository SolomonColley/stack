/// <summary>
/// FullStackException logic error class for handling exceptions
/// caused by a stack being full. Custom messages can be used.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: FullStackException.cpp
/// Since: 12/12/2019
/// See <see cref="FullStackException.h"/> for function declarations.

#include "FullStackException.h"

FullStackException::FullStackException(const std::string& message)
	: std::logic_error("FullStackException: " + message)
{
} // end parameterized constructor
