#pragma once
template<class T> class Element
{
public:
	Element() = delete;
	Element(const T value);
	T getValue() const;
	Element<T>* getNext() const;
	void setNext(Element<T>* next);

private:
	T value;
	Element<T>* next;
};