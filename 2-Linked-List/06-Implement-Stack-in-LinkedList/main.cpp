#include"LinkListStack.h"
#include"ArrayStack.h"
#include<ctime>
//int main() {
//	LinkListStack<int>* Stack = new LinkListStack<int>();
//	for (int i = 0; i < 5; i++)
//	{
//		Stack->push(i);
//		Stack->print();
//	}
//
//	Stack->pop();
//	Stack->print();
//
//	return 0;
//}
template<typename T>
double test(T *e, int op)
{
	clock_t start=clock();

	for (int i = 0; i < op; i++)
	{
		//cout << "1";
		e->push(i);
	}

	for (int i = 0; i < op; i++)
	{
		e->pop();
	}

	clock_t end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;
}
int main()
{
	ArrayStack<int>* stack1 = new ArrayStack<int>();
	cout<<"ArrayStack:"<<test(stack1, 1000)<<"s"<<endl;
	LinkListStack<int>* stack2 = new LinkListStack<int>();
	cout <<"LinkListStack:"<< test(stack2, 100000) << "s" << endl;
	return 0;
}