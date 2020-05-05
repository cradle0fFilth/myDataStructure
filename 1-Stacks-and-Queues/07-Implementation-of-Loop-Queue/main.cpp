#include"LoopQueue.h"
int main()
{
	LoopQueue<int>* queue = new LoopQueue<int>();
	for (int i = 0; i < 10; i++)
	{
		queue->enqueue(i);
		queue->print();
		if (i % 3 == 2)
			queue->dequeue();
	}
	return 0;
}