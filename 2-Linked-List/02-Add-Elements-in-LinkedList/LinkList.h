#pragma once
template<class T>
class LinkList {
private:
	class Node {
		T e;
		Node* next;
		Node(T e, Node next)
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
	Node head;
	int size;
public:
	LinkList()
	{
		head=NULL;
		size=0;
	}
	int getSize()
	{
		return size;
	}
	void addFirst(T e)
	{
		head = new Node(e, head);
		size++;
	}
	void add(int index, T e)
	{
		Node pre=head;
		if (index<0 || index>size)
			throw"Fail: illegal index";
		if (index == 0)
			addFirst(e);
		else
		{
			for (int i = 0; i < index - 1; i++)
			{
				pre = pre->next;
			}
			pre->next = new Node(e, pre->next);
		}
		size++;
	}
	
	void addLast(T e)
	{
		add(size, e);
	}
};
