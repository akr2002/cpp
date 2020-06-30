#ifndef STACK_H
#define STACK_H

class Stack
{
private:
	int top;
	int* stack;
	int width;
public:
	Stack();
	Stack(int width);
	~Stack();
	void init(int width);
	void init();
	void run();
	inline void push(int data);
	inline int pop();
	inline bool isOverflow();
	inline bool isUnderflow();
	void display();
};

#endif