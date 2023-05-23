#pragma once
template<class T> class Element
{
public:
	Element();
	Element(T value);
	T getValue();
	Element<T>* getNext();
	void setNext(Element<T>* next);

private:
	T value;
	Element<T> *next;
};