#ifndef NODE_H
#define NODE_H

class Node
{
	public:
		int data;
		Node *prev, *next;
		Node()
		{
			prev = next = nullptr;
		}
} ;

#endif

