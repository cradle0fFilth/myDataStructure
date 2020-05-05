#pragma once
template<class T>
class Queue {
	bool isEmpty();
	int getSize();
	void enqueue(T e);
	T dequeue();
	T getFront();
};
