#pragma once
#include <memory>

template<class T> class Element
{
public:
	Element() = delete;
	Element(const T value);
	T getValue() const;
	std::shared_ptr<Element<T>> getNext() const;
	void setNext(std::shared_ptr<Element<T>> next);

private:
	T value;
	std::shared_ptr<Element<T>> next;
};