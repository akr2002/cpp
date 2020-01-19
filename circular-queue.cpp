#include <iostream>

const int size = 7;
int CQueue[size], front = -1, rear = -1;

int InsertInCQ(int CQueue[], int ele)
{
	if ((front == 0 && rear == size - 1) || (front == rear - 1))
		return -1;
	else if (rear == -1) front = rear = 0;
	else if (rear == size - 1) rear = 0;
	else ++rear;
	CQueue[rear] = ele;
	return 0;
}

void Display(int CQueue[], int front, int rear)
{
	int i = 0;
	std::cout << "\nCircular queue is:\n" << "(Front shown as >>>, Rear as <<< and free space as -)\n";
	if (front == -1) return;
	if (rear >= front)
	{
		for (i = 0; i < front; ++i)
			std::cout << "-";
		std::cout << ">>>";
		for (i = front; i < rear; ++i)
			std::cout << CQueue[i] << " <- ";
		std::cout << CQueue[rear] << " <<< " << std::endl;
	}
	else
	{
		for (i = 0; i < rear; ++i) std::cout << CQueue[i] << " <- ";
		std::cout << CQueue[rear] << " <<< ";
		for (; i < front; ++i) std::cout << " - ";
		std::cout << " >>> ";
		for (i = front; i < size; ++i) std::cout << CQueue[i] << " <- ";
		std::cout << "\t...wrap around...";
	}
}

int DelInCQ(int CQueue[])
{
	int ret;
	if (front == -1) return -1;
	else
	{
		ret = CQueue[front];
		if (front == rear) front = rear - 1;
		else if (front == size - 1) front = 0; // wrap around
		else ++front;
	}
	return ret;
}

int main()
{
	int item, res, ch;
	do {
		std::cout << "\t\t\tCircular Queue Menu\n";
		std::cout << "\t1. Insert\n"
			<< "\t2. Delete\n"
			<< "\t3. Display\n"
			<< "\t4. Exit\n";
		std::cout << "Enter your choice (1-4): ";
		std::cin >> ch;
		switch (ch)
		{
		case 1: std::cout << "\nEnter item for insertion: ";
			std::cin >> item;
			res = InsertInCQ(CQueue, item);
			if (res == -1) std::cout << "OVERFLOW\n";
			else
			{
				std::cout << "\nNow the circular queue is:\n";
				Display(CQueue, front, rear);
			}
			break;
		case 2: item = DelInCQ(CQueue);
			std::cout << "Element deleted is: " << item << std::endl;
			Display(CQueue, front, rear);
			break;
		case 3: Display(CQueue, front, rear);
			break;
		case 4: break;
		default: std::cout << "Valid choices are 1-4 only\n";
			break;
		}
	} while (ch != 4);
	return 0;
}
