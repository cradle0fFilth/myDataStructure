#pragma once
template<class T>
class Stack
{
	bool isEmpty();
	int getSize();
	void push(T e);
	T peek();
	T pop();
};
