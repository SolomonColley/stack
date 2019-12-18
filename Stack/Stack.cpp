/// <summary>
/// This class provides a full implementation of a stack
/// abstract data type (ADT). Stacks are a last in, first out
/// (LIFO) ADT.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Stack.cpp
/// See <see cref="Stack.h"/> for function declarations.
/// Since: 12/13/2019

#include "Stack.h"

template<class ItemType>
Stack<ItemType>::Stack(const int size)
	: MAX_SIZE(size), itemCount(0), top(-1), items(nullptr)
{
	try
	{
		if (size >= 1)
			items = new ItemType[MAX_SIZE];
		else
			throw NegativeSizeException(std::string("Stack(const int size) ")
				+ " called with a size ("
				+ std::to_string(size)
				+ ") less than or equal to zero."); // end if-else
	}
	catch (const NegativeSizeException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end parameterized constructor

template<class ItemType>
Stack<ItemType>::~Stack()
{
	delete[] items;
	items = nullptr;
} // end destructor

template<class ItemType>
void Stack<ItemType>::push(const ItemType& item)
{
	try
	{
		if (isFull() == false)
		{
			top++;
			items[top] = item;
			itemCount++;
		}
		else
			throw FullStackException(std::string("push(const ItemType& item) ")
				+ " called, but the stack is full at "
				+ std::to_string(MAX_SIZE)
				+ " data items."); // end if-else
	}
	catch (const FullStackException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end push

template<class ItemType>
void Stack<ItemType>::pop()
{
	try
	{
		if (isEmpty() == false)
		{
			items[top] = NULL;
			top--;
			itemCount--;
		}
		else
			throw EmptyStackException(std::string("pop() was called, ")
				+ " but the stack is empty."); // end if-else
	}
	catch (const EmptyStackException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch
} // end pop

template<class ItemType>
ItemType Stack<ItemType>::peek() const
{
	try
	{
		if (isEmpty() == false)
			return items[top];
		else
			throw EmptyStackException(std::string("peek() was called, ")
				+ " but the stack is empty."); // end if-else
	}
	catch (const EmptyStackException & ex)
	{
		std::cout << ex.what() << std::endl;
	} // end try-catch

	return NULL;
} // end peek

template<class ItemType>
int Stack<ItemType>::size() const noexcept
{
	return itemCount;
} // end size

template<class ItemType>
int Stack<ItemType>::maxSize() const noexcept
{
	return MAX_SIZE;
} // end maxSize

template<class ItemType>
bool Stack<ItemType>::isFull() const noexcept
{
	if (top + 1 == MAX_SIZE)
		return true;
	else
		return false; // end if-else
} // end isFull

template<class ItemType>
bool Stack<ItemType>::isEmpty() const noexcept
{
	if (top == -1)
		return true;
	else
		return false; // end if-else
} // end isEmpty
