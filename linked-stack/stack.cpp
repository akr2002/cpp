#include "stack.h"
#include <iostream>

bool Stack::isEmpty()
{
	if (top == nullptr)
		return true;
	else return false;
}

int Stack::getTop()
{
	if (!isEmpty())
		return (top->data);
}

void Stack::push(int element)
{
	Node *node;
	node = new Node;
	node->data = element;
	node->link = nullptr;
	node->link = top;
	top = node;
}

int Stack::pop()
{
	Node* temp = top;
	int data = top->data;
	if (!isEmpty())
	{
		top = top->link;
		delete temp;
		return (data);
	}
}

void Stack::run()
{
	int choice = 0;
	int element;
	while (choice != 4)
	{
		std::cout << "\n1. Push\n"
			  << "2. Pop\n"
			  << "3. Display\n"
			  << "4. Exit\n"
			  << "Enter your choice (1-4): ";
		std::cin >> choice;
		switch (choice)
		{
		case 1: std::cout << "Enter element: ";
			std::cin >> element;
			push(element);	
			break;

		case 2: if (!isEmpty())
				std::cout << "Element popped: " << pop() << "\n";
			else std::cout << "\nUNDERFLOW\n";
			break;

		case 3: display(); 
			break;
		case 4: return ;
		default: std::cout << "Enter value between 1-4\n";
		}
	}
}

void Stack::display()
{
	Node* temp = top;
	if (temp == nullptr)
		std::cout << "\nUNDERFLOW\n";
	else
	{
		while (temp != nullptr)
		{
			std::cout << temp->data << "\t";
			temp = temp->link;
		}
	}
	std::cout << std::endl;
}
