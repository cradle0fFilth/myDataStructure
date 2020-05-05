#pragma once
#include"Array.h"
#include"Queue.h"

template<class T>
class ArrayQueue :public Queue<T> {
private:
	Array<T>* Queue;
public:
	ArrayQueue(int capacity)
	{
		Queue = new Array<T>(capacity);
	}
	ArrayQueue()
	{
		Queue = new Array<T>();
	}

	bool isEmpty()
	{
		return Queue->isEmpty();
	}

	int getSize()
	{
		return Queue->getSize();
	}

	void enqueue(T e)
	{
		Queue->addLast(e);
	}

	T dequeue()
	{
		return Queue->removeFirst();
	}

	T getFront()
	{
		return Queue->getFirst();
	}

	void print()
	{
		cout << "Queue: size =" << this->getSize() << " ,capacity =" << Queue->getCapacity() << endl;
		cout << "front";
	    Queue->print(); 
	    cout<< "tail" << endl;
	}
};
