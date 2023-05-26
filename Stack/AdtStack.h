#pragma once
#include "Element.h"
template <class T> class AdtStack
{
	public:
		AdtStack() = default;
		~AdtStack();
		int getSize();
		bool isEmpty();
		T top();
		void push(T value);
		bool pop();
	private:
		int size;
		Element<T>* lastElement;
};
