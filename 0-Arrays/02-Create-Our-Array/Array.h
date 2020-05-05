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
        Array(10);
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
};

