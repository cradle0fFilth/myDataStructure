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
		add(root, e);
	}

	//���ز����½ڵ�֮��Ķ����������ĸ�
	void add(Node* node, T e)
	{
		if(node->e == e)
			return;
		if (node->left == NULL&&e < node->left) {   //��С���Ϊ���ϵ���С����������֪�������ΪNULL��NULLҲ�Ƕ�����������
			node->left=new Node(e);
			size++;
			return;
		}
		else if(node->right == NULL&&e > node->right){
			node->right=new Node(e);
			size++;
			return;
		}
		if (e < node->left)   //���ϵĵݹ�һ����С�Ķ���������
			add(node->left, e);//���µ�������ԭ������
		else if (e > node->right)
			add(node->right, e);
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