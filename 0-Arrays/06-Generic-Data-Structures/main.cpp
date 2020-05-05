#include"Array.h"
#include"Student.h"
int main()
{
	/*Array<int> *arr = new Array<int>(20);
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
	arr->print();*/

	Array<Student> *studentArr = new Array<Student>(10);
	studentArr->addLast( *(new Student("Jack", 50)));
	studentArr->addLast( *(new Student("May", 100)));
	studentArr->addLast( *(new Student("Cranda", 80)));
	studentArr->addLast( *(new Student("Sam", 65)));
	studentArr->print();
	return 0;
}