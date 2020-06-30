#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack
{
	private:
		Node* top;
		int size;
		inline bool isEmpty();
	public:
		Stack()
		{
			top = nullptr;
			size = 0;
		}
		int getTop();
		int pop();
		void push(int element);
		int currentSize();
		void run();
		void display();
} ;

#endif

