/// <summary>
/// This program demonstrates the use of the Stack abstract
/// data type (ADT). Stacks are a last in, first out (LIFO)
/// ADT. Common algorithms of the Stack include push, pop,
/// and peek. This implementation also includes functions to
/// test if the stack is full or empty.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Main.cpp
/// Since: 12/14/2019

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	// initialize the stack with a size of 5
	Stack<int>* numbers = new Stack<int>(5);

	cout << "Welcome to the Stack demonstration!\n";

	cout << "\ntesting if stack is empty... should be true: ";
	if (numbers->isEmpty())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "testing if stack is full... should be false: ";
	if (numbers->isFull())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "\npushing 5 numbers onto the stack (1-5)...\n";
	for (int i = 1; i <= 5; i++)
		numbers->push(i); // end for

	cout << "\ntesting if the stack is empty... should be false: ";
	if (numbers->isEmpty())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "testing if the stack is full... should be true: ";
	if (numbers->isFull())
		cout << "true\n";
	else
		cout << "false\n"; // end if-else

	cout << "\npeeking the top of the stack... should be 5: ";
	cout << to_string(numbers->peek()) << "\n";

	cout << "popping three numbers from the stack...\n";
	for (int i = 0; i < 3; i++)
		numbers->pop(); // end for

	cout << "peeking the top of the stack... should be 2: ";
	cout << to_string(numbers->peek()) << "\n";

	cout << "\ndeleting the stack and freeing allocated memory...\n";

	// free up allocated memory and exit successfully
	delete numbers;
	numbers = nullptr;

	cout << "\nThank you for checking out my Stack implementation!" << endl;

	return 0;
} // end main
