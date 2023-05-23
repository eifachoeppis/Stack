#pragma once
#include "Element.h"
template <class T> class StackImpl
{
	public:
		StackImpl();
		int getSize();
		bool isEmpty();
		void print();
		Element<T> top();
		void push(Element<T> element);
		bool pop();
	private:
		int size;
		Element<T> lastElement;
};

