#include"BST.h"
int main()
{
	BST<int>* bst = new BST<int>();
	bst->add(1);
	bst->add(8);
	bst->add(3);
	bst->add(4);
	bst->add(6);
	bst->add(2);
	//bst->preOrder();
	//bst->midOrder();
	bst->postOrder();
	return 0;
}