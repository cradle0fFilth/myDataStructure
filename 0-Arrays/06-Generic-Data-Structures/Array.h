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
	//���캯�����������capacity����Array
	Array(int capacity)
	{
		size = 0;
		data = new T[capacity];
		this->capacity = capacity;
	}

	//�޲����Ĺ��캯����Ĭ��capacityΪ10
	Array()
	{
		size = 0;
		data = new T[10];
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
	void add(int index, T e)
	{
		if (size == capacity)
			throw"Add fail,Array is full";
		if (index<0 || index>size)
			throw"Add fail,need index>=0&&index<=size";
		for (int i = size - 1; i >= index;i--)
		{
			data[i + 1] = data[i];
		}
		data[index] = e;
		size++;
	}

	//������������Ԫ��e
	void addLast(T e)
	{
		add(size, e);
	}

	//������ͷ����Ԫ��e
	void addFirst(T e)
	{
		add(0, e);
	}

	//��ӡ��������
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
		cout << "]" << endl;
	}

	//��ȡ����λ�õ�ֵ
	T get(int index)
	{
		if (index < 0 || index >= size)
			throw"Fail,the index is illegal";
		return data[index];
	}

	//�ı�������Ԫ��ֵ
	void change(int index,T e)
	{
		if (index < 0 || index >= size)
			throw"Fail,the index is illegal";
		data[index] = e;
	}

	//�鿴�������Ƿ����ĳԪ��
	bool contains(T e)
	{
		for (int i = 0; i < size; i++)
		{
			if (data[i] == e)
				return true;
		}
		return false;
	}

	//�鿴�������Ƿ����ĳԪ�أ������ڷ���Ԫ���������������ڷ���-1
	int find(T e)
	{
		for (int i = 0; i < size; i++)
		{
			if (data[i] == e)
				return i;
		}
		return -1;
	}

	//ɾ������λ��Ԫ�أ��������Ԫ��
	T remove(int index)
	{
		if (index < 0 || index >= size)
			throw"illigal index to remove";

		T ret = data[index];
		for (int i = index + 1; i < size; i++)
			data[i - 1] = data[i];
		size--;
		return ret;
	}

	//ɾ����Ԫ��
	void removeFirst()
	{
		remove(0);
	}

	//ɾ��βԪ��
	void removeLast()
	{
		remove(size - 1);
	}

	//ɾ��Ԫ��ֵΪe��Ԫ��
	bool removeElement(T e)
	{
		int index = find(e);
		return remove(index);
	}
};
