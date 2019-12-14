/// <summary>
/// Templated node class representing a basic unit of an
/// abstract data type (ADT). Provides basic functionality
/// for getting and setting data items.
/// </summary>
/// 
/// Author: Solomon Colley
/// File: Node.h
/// See <see cref="Node.h"/> for function declarations.
/// Since 12/13/2019

#include "Node.h"

template<class ItemType>
Node<ItemType>::Node() : next(nullptr)
{
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& item) : item(item), next(nullptr)
{
} // end parameterized constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& item, Node<ItemType>* nextNodePtr)
	: item(item), next(nextNodePtr)
{
} // end parameterized constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& item)
{
	this->item = item;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextNodePtr)
{
	this->next = nextNodePtr;
} // end setNext

template<class ItemType>
ItemType Node<ItemType>::getItem() const
{
	return item;
} // end getItem

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const
{
	return next;
} // end getNext
