#include "queue.h"
#include <iostream>

void Queue::run()
{
	int choice = 0;
	int element;
	while (choice != 4)
	{
		std::cout << "\n1. Insert element\n"
			  << "2. Delete element\n"
			  << "3. Display\n"
			  << "4. Exit\n"
			  << "Enter your choice (1-4): ";
		std::cin >> choice;
		switch (choice)
		{
			case 1: std::cout << "Enter element: ";
				std::cin >> element;
				insert(element);
				break;
			case 2: if (!isEmpty())
					std::cout << "Element deleted: " << delNode() << "\n";
				else std::cout << "\nUNDERFLOW\n";
				break;
			case 3: display();
				break;
			case 4: return ;
			default: std::cout << "Enter value between 1-4\n";
		}
	}
}

bool Queue::isEmpty()
{
	if (front == nullptr)
		return true;
	else return false;
}

void Queue::insert(int element)
{
	Node* node = new Node;
	node->data = element;
	node->link = nullptr;
	if (rear == nullptr)
	{
		front = node;
		rear = node;
	}
	else
	{
		rear->link = node;
		rear = node;
	}
}

int Queue::delNode()
{
	int temp;
	Node* current = nullptr;
	if (!isEmpty())
	{
		temp = front->data;
		current = front;
		front = front->link;
		delete current;
		if (front == nullptr) rear = nullptr;
		return (temp);
	}
}

void Queue::display()
{
	Node* temp = front;
	if (temp == nullptr)
		std::cout << "\nUNDERFLOW\n";
	else
	{
		while (temp != nullptr)
		{
			std::cout << temp->data << "\t";
			temp = temp->link;
		}
		std::cout << std::endl;
	}
}

