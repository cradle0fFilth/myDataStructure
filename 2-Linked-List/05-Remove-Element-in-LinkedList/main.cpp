#include"LinkList.h"
int main() {
	LinkList<int>* list = new LinkList<int>();
	for (int i = 0; i < 5; i++)
	{
		list->addFirst(i);
		list->print();
	}

	list->add(2, 666);
	list->print();

	list->remove(2);
	list->print();

	return 0;
}