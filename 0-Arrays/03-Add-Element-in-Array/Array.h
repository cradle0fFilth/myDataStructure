#pragma once
class Array
{
private:
	int* data;
	int size;
	int capacity;
public:
	//���캯�����������capacity����Array
	Array(int capacity)
	{
		size = 0;
		data = new int[capacity];
		this->capacity = capacity;
	}

	//�޲����Ĺ��캯����Ĭ��capacityΪ10
	Array()
	{
		size = 0;
		data = new int[10];
		this->capacity = capacity;
	}

	//��ȡ������Ԫ�ظ���
	int getSize()
	{
		return size;
	}

	//��ȡ��������
	int getCapacity()
	{
		return capacity;
	}

	//�ж��������Ƿ���Ԫ�أ��Ƿ�Ϊ�գ�
	int isEmpty()
	{
		return size == 0;
	}

	//��������indexλ�ò���Ԫ��e
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

	//������������Ԫ��e
	void addLast(int e)
	{
		add(size, e);
	}

	//������ͷ����Ԫ��e
	void addFirst(int e)
	{
		add(0, e);
	}
};

