#pragma once
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
			thie->e = e;
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
			return new Node(e);
			size++;
		}
		if (e < node->left)   //不断的递归一个更小的二分搜索树
			node->left = add(node->left, e);//将新的左数和原树关联
		else if (e > node->right)
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
};