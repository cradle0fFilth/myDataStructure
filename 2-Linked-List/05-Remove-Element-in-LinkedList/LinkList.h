#pragma once
#include<iostream>
using namespace std;
template<class T>
class LinkList {
public:
	class Node {
	public:
		T e;
		Node* next;
		Node(T e, Node *next)
		{
			this->e = e;
			this->next = next;
		}
		Node(T e)
		{
			Node(e, NULL);
		}
		Node()
		{
			Node(NULL, NULL);
		}
	};

	Node *dummyHead;
	int size;
	LinkList()
	{
		dummyHead = new Node();
		size = 0;
	}
	int getSize()
	{
		return size;
	}

	//向链表中index位置添加元素
	void add(int index, T e)
	{
		Node* pre=dummyHead;

		if (index<0 || index>size)
			throw"illegal index to add";
		
	    for (int i = 0; i < index; i++)
		{
			pre = pre->next;
		}
		pre->next = new Node(e, pre->next);
		size++;
	}

	void addFirst(T e)
	{
		add(0, e);
	}

	void addLast(T e)
	{
		add(size, e);
	}

	T get(int index)
	{
		if (index < 0 || index >= size)
			throw"illigal index to get";
		Node* ret = dummyHead->next;
		for (int i = 0; i <index ; i++)
		{
			ret = ret->next;
		}
		return ret->e;
	}

	T getFirst()
	{
		return get(0);
	}
	T getLast()
	{
		return get(size-1);
	}

	void set(int index,T e)
	{
		if (index < 0 || index >= size)
			throw"illigal index to get";
		Node *ret = dummyHead->next;
		for (int i = 0; i < index; i++)
		{
			ret = ret->next;
		}
		ret->e = e;
	}

	bool contains(T e)
	{
		Node *ret = dummyHead->next;
		for (; ret->next!=NULL; ret = ret->next)
		{
			if (ret->e = e)
				return true;
		}
		return false;
	}

	void remove(int index)
	{
		if (index < 0 || index >= size)
			throw"illigal index to get";
		Node* pre = dummyHead;
		for (int i = 0; i < index; i++)
		{
			pre = pre->next;
		}
		Node* retNode = pre->next;
		pre->next = retNode->next;
		retNode->next = NULL;
		size--;
	}

	T removeFirst()
	{
		return remove(0);
	}

	T removeLast()
	{
		return remove(size - 1);
	}

	void print() 
	{
		cout << "LinkList:";
		Node *ret = dummyHead->next;
		for (; ret!= NULL; ret = ret->next)
		{
			cout << ret->e << "->";
		}
		cout << "NULL" << endl;
	}
};
