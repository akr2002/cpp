#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
	int* arr;
	int front;
	int rear;
	int size;

public:
	Queue();
	Queue(int);
	~Queue();
	void run();
	inline bool isOverflow();
	inline bool isUnderflow();
	void insert(int ele);
	void remove();
	void display();
};

#endif