#include"Queue.h"
template<class T>
class LoopQueue:public Queue<T> {
private:
	T* array;
	int front;
	int tail;
	int size;
	int capacity;
	void resize(int newCapacity)
	{
		T* data = new T[newCapacity+1];
		for (int i = 0; i < size; i++)
		{
			data[i] = array[(front + i) % getCapacity()];
		}
		front = 0;
		tail = size;
		capacity = newCapacity;
	}
public:
	LoopQueue(int capacity)
	{
		array = new T[capacity+1];
		front = 0;
		tail = 0;
		this->capacity = capacity-1;
	}

	LoopQueue()
	{
		LoopQueue(10);
	}

	int getCapacity()
	{
		return capacity;
	}

	bool isEmpty()
	{
		return front == tail;
	}

	int getSize()
	{
		return size;
	}

};