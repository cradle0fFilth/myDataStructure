#pragma once
#include<iostream>
using namespace std;
template<class T>
class Array
{
private:
	T* data;
	int size;
	int capacity;
public:
	//构造函数，传入参数capacity构造Array
	Array(int capacity)
	{
		size = 0;
		data = new T[capacity];
		this->capacity = capacity;
	}

	//无参数的构造函数，默认capacity为10
	Array()
	{
		size = 0;
		data = new T[10];
		this->capacity = 10;
	}

	//获取数组中元素个数
	int getSize()
	{
		return size;
	}

	//获取数组容量
	int getCapacity()
	{
		return capacity;
	}

	//判断数组中是否有元素（是否为空）
	int isEmpty()
	{
		return size == 0;
	}

	//在数组中index位置插入元素e
	void add(int index, T e)
	{
		if (size == capacity)
			resize(2 * size);
		if (index<0 || index>size)
			throw"Add fail,need index>=0&&index<=size";

		for (int i = size - 1; i >= index;i--)
		{
			data[i + 1] = data[i];
		}
		data[index] = e;
		size++;
	}

	//在数组最后插入元素e
	void addLast(T e)
	{
		add(size, e);
	}

	//在数组头插入元素e
	void addFirst(T e)
	{
		add(0, e);
	}

	//打印整个数组
	void print()
	{
		cout << "Array:size =" << size << "," << "capacity =" << capacity << endl;
		cout << "[";
		for (int i = 0; i < size; i++)
		{
			cout << data[i];
			if (i < size - 1)
				cout << ",";
		}
		cout << "]" ;
	}

	//获取索引位置的值
	T get(int index)
	{
		if (index < 0 || index >= size)
			throw"Fail,the index is illegal";
		return data[index];
	}

	//获取数组中第一个元素的值
	T getFirst()
	{
		return get(0);
	}

	//获取索引中最后一个元素的值
	T getLast()
	{
		return get(size - 1);
	}

	//改变数组中元素值
	void change(int index,T e)
	{
		if (index < 0 || index >= size)
			throw"Fail,the index is illegal";
		data[index] = e;
	}

	//查看数组中是否包含某元素
	bool contains(T e)
	{
		for (int i = 0; i < size; i++)
		{
			if (data[i] == e)
				return true;
		}
		return false;
	}

	//查看数组中是否包含某元素，若存在返回元素索引，若不存在返回-1
	int find(T e)
	{
		for (int i = 0; i < size; i++)
		{
			if (data[i] == e)
				return i;
		}
		return -1;
	}

	//删除索引位置元素，返回这个元素
	T remove(int index)
	{
		if (index < 0 || index >= size)
			throw"illigal index to remove";
		T ret = data[index];
		for (int i = index + 1; i < size; i++)
			data[i - 1] = data[i];
		size--;

		if (size <= capacity / 2)
			resize(capacity / 2);
		return ret;
	}

	//删除首元素
	T removeFirst()
	{
		return remove(0);
	}

	//删除尾元素
	T removeLast()
	{
		return remove(size - 1);
	}

	//删除元素值为e的元素
	bool removeElement(T e)
	{
		int index = find(e);
		return remove(index);
	}

	void resize(int newCapacity)
	{
		T* arr = new T[newCapacity];
		for (int i = 0;i < size; i++)
		{
			arr[i] = data[i];
		}
		data = arr;
		capacity = newCapacity;
	}
};

