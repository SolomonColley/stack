/// <summary>
/// Templated node class representing a basic unit of an
/// abstract data type (ADT). Provides basic functionality
/// for getting and setting data items.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Node.h
/// See <see cref="Node.cpp"/> for function definitions.
/// Since 12/13/2019

#pragma once

template<class ItemType>
class Node
{
private:
	ItemType item;			// a data item
	Node<ItemType>* next;	// a pointer to the next data item
public:
	/// <summary>
	/// The default constructor
	/// </summary>
	Node();

	/// <summary>
	/// A parameterize constructor. Sets the data item of
	/// this node.
	/// </summary>
	/// <param name="item">a data item</param>
	Node(const ItemType& item);

	/// <summary>
	/// A parameterized constructor. Sets the data item of
	/// this node and sets the next data item.
	/// </summary>
	/// <param name="item">a data item</param>
	/// <param name="nextNodePtr">a pointer to the next node to be set</param>
	Node(const ItemType& item, Node<ItemType>* nextNodePtr);

	/// <summary>
	/// Sets a data item to this node.
	/// </summary>
	/// <param name="item">a data item</param>
	void setItem(const ItemType& item);

	/// <summary>
	/// Sets the next data item.
	/// </summary>
	/// <param name="nextNodePtr">a pointer to the next node to be set</param>
	void setNext(Node<ItemType>* nextNodePtr);

	/// <summary>
	/// Gets the data item of this node.
	/// </summary>
	/// <returns>the data item of this node</returns>
	ItemType getItem() const;

	/// <summary>
	/// Gets a pointer to the next node.
	/// </summary>
	/// <returns>a pointer to the next node</returns>
	Node<ItemType>* getNext() const;
}; // end Node
