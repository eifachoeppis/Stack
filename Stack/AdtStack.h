#pragma once
#include "Element.h"
#include <memory>

template <class T> class AdtStack
{
	public:
		AdtStack() = default;
		int getSize();
		bool isEmpty();
		T top();
		void push(T value);
		bool pop();
	private:
		int size;
		std::shared_ptr<Element<T>> lastElement;
};
