#include "Element.h"

template <class T> Element<T>::Element() {

}

template <class T> Element<T>::Element(T value) {
	this->value = value;
}

template <class T> T Element<T>::getValue() {
	return this->value;
}

template <class T> Element<T>* Element<T>::getNext() {
	return this->next;
}

template <class T> void Element<T>::setNext(Element<T>* next) {
	this->next = next;
}