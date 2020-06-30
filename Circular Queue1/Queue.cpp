#include "Queue.h"
#include <iostream>

Queue::Queue()
{
	arr = NULL;
	front = -1;
	rear = -1;
	std::cout << "Enter width of the queue: ";
	std::cin >> size;
	arr = new int[size];
}

Queue::Queue(int size)
{
	this->size = size;
	arr = new int[size];
	front = -1;
	rear = -1;
}

Queue::~Queue()
{
	delete[] arr;
}

void Queue::run()
{
	int option, ele, res;
	std::cout << "\nCircular Queue Menu"
		<< "\n-------------------\n"
		<< "\n1. Insert element\n"
		<< "2. Delete element\n"
		<< "3. Display queue\n"
		<< "4. Exit\n";
	std::cout << "Enter option: ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		if (isOverflow())
		{
			std::cout << "OVERFLOW\n";
			run();
		}
		else
		{
			std::cout << "Enter element: ";
			std::cin >> ele;
			insert(ele);
			run();
		}
		break;

	case 2:
		if (isUnderflow())
		{
			std::cout << "UNDERFLOW\n";
			run();
		}
		else
		{
			remove();
			std::cout << "Element deleted\n";
			run();
		}
		break;
	case 3:
		if (isUnderflow())
		{
			std::cout << "UNDERFLOW\n";
			run();
		}
		else
		{
			display();
			run();
		}
		break;
	case 4: return;
	default: std::cout << "Enter a value between 1 - 4\n";
		run();
		break;
	}
}

inline bool Queue::isOverflow()
{
	if ((front == 0 && rear == size - 1) || front == rear + 1)
		return true;
	return false;
}

inline bool Queue::isUnderflow()
{
	if (front == -1)
		return true;
	return false;
}

void Queue::insert(int ele)
{
	if (rear == -1) front = rear = 0;
	else if (rear == size - 1) rear = 0;
	else ++rear;
	arr[rear] = ele;
}

void Queue::remove()
{
	if (front == rear) front = rear = -1;
	else if (front == size - 1) front = 0;
	else ++front;
}

void Queue::display()
{
	std::cout << "Circular queue is:\n"
		<< "(front shown as >>>, rear as <<< and free space as -)\n";
	if (rear >= front)
	{
		for (int i = 0; i < front; ++i)
			std::cout << " - ";
		std::cout << " >>> ";
		for (int i = front; i < rear; std::cout << arr[i++] << " <- ");
		std::cout << arr[rear] << " <<< " << std::endl;
	}
	else
	{
		int i = 0;
		for (i = 0; i < rear; std::cout << arr[i++] << " <- ");
		std::cout << arr[rear] << " <<< ";
		for (; i < front; ++i) std::cout << " - ";
		std::cout << " >>> ";
		for (i = front; i < size; std::cout << arr[i++] << " <- ");
	}
}
