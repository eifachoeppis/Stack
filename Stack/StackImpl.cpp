#include "StackImpl.h"

template <class T> StackImpl<T>::StackImpl() {

}

template <class T> int StackImpl<T>::getSize() {
	return this->size;
}

template <class T> bool StackImpl<T>::isEmpty() {
	return this->size == 0;
}

template <class T> void StackImpl<T>::print() {

}

template <class T> Element<T> StackImpl<T>::top() {
	return lastElement;
}

template <class T> void StackImpl<T>::push(Element<T> element) {
	this->size++;
	element.setNext(this->lastElement);
	this->lastElement = element;
}

template <class T> bool StackImpl<T>::pop() {
	if (this->lastElement == nullptr)
	{
		return false;
	}
	this->size--;
	this->lastElement = lastElement.getNext();
	return true;
}