#pragma once
#include"Stack.h"
#include"LinkList.h"
template<class T>
class LinkListStack :public Stack<T> {
private:
	LinkList<T> *List;
public:
	LinkListStack()
	{
		List = new LinkList<T>();
	}

	int getSize()
	{
		List->getSize();
	}

	int isEmpty()
	{
		List->isEmpty();
	}

	void push(T e)
	{
		List->addFirst(e);
	}

	T pop()
	{

		return List->removeFirst();
	}

	T peek()
	{
		return List->getFirst();
	}
	
	void print()
	{
		cout << "top: ";
		List->print();
	}
};
