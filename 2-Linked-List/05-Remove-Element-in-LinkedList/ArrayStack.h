#pragma once
#include"Array.h"
#include"Stack.h"

template<class T>
class ArrayStack;

template<class T>
class ArrayStack:public Stack<T>{
private:
	Array<T> *array;
public:
	ArrayStack(int capacity)
	{
		array = new Array<T>(capacity);
	}

	ArrayStack()
	{
		array = new Array<T>();
	}

	bool isEmpty()
	{
		return array->isEmpty();
	}

	int getSize()
	{
		return array->getSize();
	}

	void push(T e)
	{
		array->addLast(e);
	}

	T peek()
	{
		return array->getLast();
	}

	T pop()
	{
		return array->removeLast();
	}

	void print() {
		array->print();
		std::cout << " top" << std::endl;
	}
};
