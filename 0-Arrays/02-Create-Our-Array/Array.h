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
        Array(10);
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
};

