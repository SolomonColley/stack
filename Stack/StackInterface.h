/// <summary>
/// This templated class interface can be used for creating
/// and manipulating a Stack abstract data type (ADT).
/// </summary>
/// 
/// Author: Solomon Colley
/// File: StackInterface.h
/// Since: 12/12/2019

#pragma once

#include "EmptyStackException.h"
#include "FullStackException.h"

template<class ItemType>
class StackInterface
{
public:
	/// <summary>
	/// Pushes an item onto the stack.
	/// </summary>
	/// <param name="item">the item to be pushed onto the stack</param>
	/// <exception cref="FullStackException">thrown when the stack is full</exception>
	void push(const ItemType& item);

	/// <summary>
	/// Pops the top item off the stack.
	/// </summary>
	/// <exception cref="EmptyStackException">thrown when the stack is empty</exception>
	void pop();

	/// <summary>
	/// Peeks the top item in the stack.
	/// </summary>
	/// <returns>the top item in the stack</returns>
	/// <exception cref="EmptyStackException">thrown when the stack is empty</exception>
	ItemType peek() const;

	/// <summary>
	/// Determines whether the stack is full or not.
	/// </summary>
	/// <returns>true if the stack is full, or false if not</returns>
	bool isFull() const noexcept;

	/// <summary>
	/// Determines whether the stack is empty or not.
	/// </summary>
	/// <returns>true if the stack is empty, or false if not</returns>
	bool isEmpty() const noexcept;
}; // end StackInterface
