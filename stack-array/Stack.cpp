#include "Stack.h"
#include <iostream>

Stack::Stack()
{
	top = -1;
	stack = nullptr;
	width = 0;
}

Stack::Stack(int width)
{
	top = -1;
	this->width = width;
	stack = new int[this->width];
}

Stack::~Stack()
{
	delete[] stack;
}

void Stack::init(int width)
{
	this->width = width;
	stack = new int[this->width];
}

void Stack::init()
{
	std::cout << "Enter width of the stack: ";
	std::cin >> width;
	stack = new int[width];
}

void Stack::run()
{
	int choice = 0, data;
	while (choice != 4)
	{
		std::cout << "\n1. Push\n"
			<< "2. Pop\n"
			<< "3. Display\n"
			<< "4. Exit\n"
			<< "Enter option (1-4): ";
		std::cin >> choice;
		switch (choice)
		{
		case 1: if (!isOverflow())
		{
			std::cout << "Enter element: ";
			std::cin >> data;
			push(data);
		}
			  else std::cout << "STACK OVERFLOW\n";
			break;
		case 2: if (!isUnderflow())
			std::cout << "Element popped: " << pop() << "\n";
			  else std::cout << "STACK UNDERFLOW\n";
			break;
		case 3: if (!isUnderflow()) display();
			  else std::cout << "STACK UNDERFLOW\n";
			break;
		case 4: return;
		default: std::cout << "Enter a value between (1-4)\n";
		}
	}
}

void Stack::push(int data)
{
	stack[++top] = data;
}

int Stack::pop()
{
	return stack[top--];
}

void Stack::display()
{
	for (int i = 0; i <= top; std::cout << stack[i++] << "\t");
	return;
}

bool Stack::isOverflow()
{
	if (top == width - 1)
		return true;
	else return false;
}

bool Stack::isUnderflow()
{
	if (top == -1)
		return true;
	else return false;
}

int main()
{
	std::cout << "Test\n";
	Stack stack;
	stack.init();
	stack.run();
	return 0;
}