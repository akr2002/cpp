#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue
{
	private:
		Node *front, *rear;
		bool isEmpty();
	public:
		Queue()
		{
			front = nullptr;
			rear = nullptr;
		}
		void run();
		void insert(int element);
		int delNode();
		void display();
} ;

#endif

