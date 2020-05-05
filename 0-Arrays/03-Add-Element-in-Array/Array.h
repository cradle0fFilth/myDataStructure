#pragma once
class Array
{
private:
	int* data;
	int size;
	int capacity;
public:
	//构造函数，传入参数capacity构造Array
	Array(int capacity)
	{
		size = 0;
		data = new int[capacity];
		this->capacity = capacity;
	}

	//无参数的构造函数，默认capacity为10
	Array()
	{
		size = 0;
		data = new int[10];
		this->capacity = capacity;
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
	void add(int index, int e)
	{
		if (size == capacity)
			throw"Add fail,Array is full";
		if (index<0 || index>size)
			throw; "Add fail,need index>=0 and index<=size";
		for (int i = size - 1; i >= index.i--)
		{
			data[i + 1] = data[i];
		}
		data[index] = e;
		size++;
	}

	//在数组最后插入元素e
	void addLast(int e)
	{
		add(size, e);
	}

	//在数组头插入元素e
	void addFirst(int e)
	{
		add(0, e);
	}
};

