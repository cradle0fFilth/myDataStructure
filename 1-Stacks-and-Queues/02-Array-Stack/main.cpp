#include"ArrayStack.h"
int main()
{
	ArrayStack<int> *Stack = new ArrayStack<int>();
	for (int i = 0; i < 10; i++)
	{
		Stack->push(i);
	}
	cout << Stack;
	return 0;
}