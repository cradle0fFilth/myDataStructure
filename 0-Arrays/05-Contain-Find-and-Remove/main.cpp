#include"Array.h"
int main()
{
	Array *arr = new Array(20);
	for (int i = 0; i < 10; i++)
	{
		arr->addLast(i);
	}
	arr->print();

	arr->add(1, 100);
	arr->print();

	arr->addFirst(-1);
	arr->print();

	arr->remove(2);
	arr->print();

	arr->removeElement(4);
	arr->print();

	arr->removeFirst();
	arr->print();

	return 0;
}