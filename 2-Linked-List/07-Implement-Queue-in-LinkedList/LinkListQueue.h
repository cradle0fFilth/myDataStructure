#include"Queue.h"
#include<iostream>
using namespace std;
template<class T>
class LinkListQueue :public Queue<T>{
public:
	class Node {
	public:
		T e;
		Node* next;
		Node(T e, Node* next) :e(e), next(next) {}
		
		Node(T e)
		{
			Node(e, nullptr);
		}

		Node()
		{
			Node(nullptr, nullptr);
		}
	};
	Node* head;
	Node* tail;
	int size;

	LinkListQueue():head(nullptr),tail(nullptr),size(0){}

	int getSize()
	{
		return this->size;
	}

	bool isEmpty()
	{
		return this->size==0;
	}

	void enqueue(T e)
	{
		if (tail == nullptr)
		{
			tail = new Node(e);
			head = tail;
		}
		else 
		{
			tail->next = new Node(e,nullptr);
			tail = tail->next;
		}
		size++;
	}

	T dequeue()
	{
		if (isEmpty())
			throw("The Queue is empty");
		Node* ret = head;
		head = head->next;
		ret->next = nullptr;
		if (head==nullptr)
			tail == nullptr;
		size--;
		return ret->e;
	}

	T getFront() {
		if (isEmpty()) {
			throw"Empty Queue";
		}
		return head->e;
	}

	void print()
	{
		cout << "head: ";
		for (Node* ret = head; ret != nullptr; ret = ret->next)
		{
			cout << ret->e << "->";
		}
		cout << "tail" << endl;
	}
};