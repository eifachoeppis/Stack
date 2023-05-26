#include "AdtStack.h"
#include "Element.cpp"

template <class T> AdtStack<T>::~AdtStack() 
{
	while (pop())
	{

	}
}

template <class T> int AdtStack<T>::getSize() 
{
	return this->size;
}

template <class T> bool AdtStack<T>::isEmpty() 
{
	return this->size == 0;
}

template <class T> T AdtStack<T>::top() 
{
	return lastElement->getValue();
}

template <class T> void AdtStack<T>::push(T value) 
{
	this->size++;
	Element<T>* element = new Element<T>(value);
	element->setNext(this->lastElement);
	this->lastElement = element;
}

template <class T> bool AdtStack<T>::pop() 
{
	if (this->lastElement == nullptr)
	{
		return false;
	}
	this->size--;
	Element<T>* toDelete = this->lastElement;
	this->lastElement = lastElement->getNext();
	delete toDelete;
	return true;
}