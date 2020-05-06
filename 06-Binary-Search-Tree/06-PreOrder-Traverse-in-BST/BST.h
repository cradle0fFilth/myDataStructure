#pragma once
#include<iostream>
using namespace std;
template<class T>
class BST {
private:
	class Node
	{
	public:
		T e;
		Node* left;
		Node* right;
		Node(T e)
		{
			this->e = e;
			left = NULL;
			right = NULL;
		}
	};
public:
	Node* root;
	int size;
	BST()
	{
		root = NULL;
		size = 0;
	}

	int isEmpty()
	{
		return size==0;
	}

	int getSize()
	{
		return size;
	}

	void add(T e)
	{
		root = add(root, e);
	}

	//���ز����½ڵ�֮��Ķ����������ĸ�
	Node* add(Node* node, T e)
	{
		if (node == NULL) {   //��С���Ϊ���ϵ���С����������֪�������ΪNULL��NULLҲ�Ƕ�����������
			size++;
			return new Node(e);
			
		}
		if (e < node->e)   //���ϵĵݹ�һ����С�Ķ���������
			node->left = add(node->left, e);//���µ�������ԭ������
		else if (e > node->e)
			node->right = add(node->right, e);
		return node;
	}

	bool contains(T e)
	{
		bool contains(root, e);
	}
	
	bool contains(Node* node, T e)
	{
		if (node == NULL)
			return false;

		if (e == node->e)
			return true;
		else if (e < node->e)
			contains(node->left, e);
		else
			contains(node->right, e);
	}

	void preOrder()
	{
		preOrder(root);
	}

	void preOrder(Node* node)
	{
		if (node == NULL)
			return;
		cout << node->e << "->";
		preOrder(node->left);
		preOrder(node->right);
	}

	void midOrder()
	{
		midOrder(root);
	}

	void midOrder(Node* node)
	{
		if (node == NULL)
			return;
		midOrder(node->left);
        cout << node->e << "->";
		midOrder(node->right);
	}

	void postOrder()
	{
		postOrder(root);
	}

	void postOrder(Node* node)
	{
		if (node == NULL)
			return;
		postOrder(node->left);
		postOrder(node->right);
		cout << node->e << "->";
	}
};