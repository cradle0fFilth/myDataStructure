#pragma once
#include<iostream>
#include<stack>
#include<queue>
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

	//返回插入新节点之后的二分搜索树的根
	Node* add(Node* node, T e)
	{
		if (node == NULL) {   //最小情况为不断的缩小二分搜索树知道这个树为NULL（NULL也是二分搜索树）
			size++;
			return new Node(e);
			
		}
		if (e < node->e)   //不断的递归一个更小的二分搜索树
			node->left = add(node->left, e);//将新的左数和原树关联
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

	//void preOrder()
	//{
	//	preOrder(root);
	//}

	//void preOrder(Node* node)
	//{
	//	if (node == NULL)
	//		return;
	//	cout << node->e << "->";
	//	preOrder(node->left);
	//	preOrder(node->right);
	//}
	void preOrder()
	{
		preOrder(root);
	}

	void preOrder(Node* node) {
		stack<Node*> stack;
		stack.push(node);
		while (!stack.empty()) {
			Node* cur = stack.top();
			std::cout << cur->e << " ";
			stack.pop();
			if (cur->right != nullptr) {
				stack.push(cur->right);
			}
			if (cur->left != nullptr) {
				stack.push(cur->left);
			}
		}
		std::cout << std::endl;
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

	void levelOrder() {
		queue<Node*>* q = new std::queue<Node*>();
		q->push(root);
		while (!q->empty()) {
			Node* node = q->front();
			q->pop();
			cout << node->e << " ";
			if (node->left != nullptr) {
				q->push(node->left);
			}
			if (node->right != nullptr) {
				q->push(node->right);
			}
		}
		std::cout << std::endl;
	}

	Node* min(Node* node)
	{
		if (node->left == NULL)
			return node;
		return min(node->left);
	}

	Node* max(Node* node)
	{
		if (node->right == NULL)
			return node;
		return max(node->right);
	}

	Node* removeMin(Node* node)
	{
		if (node->left == NULL)
		{
			Node* cur = node->right;
			delete node;
			size--;
			return cur;
		}
		node->left = removeMin(node->left);
		return node;
	}

	Node* removeMax(Node* node)
	{
		if (node->right == NULL)
		{
			Node* cur = node->right;
			delete node;
			size--;
			return cur;
		}
		node->right = removeMax(node->right);
		return node;
	}
};