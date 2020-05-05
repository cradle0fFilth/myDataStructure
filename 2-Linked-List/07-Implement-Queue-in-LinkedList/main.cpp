#include"LoopQueue.h"
#include"LinkListQueue.h"
int main()
{
    LinkListQueue<int>* queue = new LinkListQueue<int>();
	for (int i = 0; i < 10; i++)
	{
		queue->enqueue(i);
		queue->print();
		if (i % 3 == 2)
			queue->dequeue();
	}
	return 0;
}