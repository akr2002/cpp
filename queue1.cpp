#include <iostream>

class Queue
{
	private:
		int* queue;
		int width;
		int front, rear;
	public:
		Queue();
		Queue(int width);
		~Queue();
		void init();
		void init(int width);
		void run();
		void insert(int element);
		int del();
		void display();
		inline bool isOverflow();
		inline bool isUnderflow();
};

Queue::Queue()
{
	queue = nullptr;
	width = 0;
	front = rear = -1;
}

Queue::Queue(int width)
{
	this->width = width;
	queue = new int[width];
	front = rear = -1;
}

Queue::~Queue()
{
	delete[] queue;
	width = 0;
	front = rear = -1;
}

void Queue::init()
{
	std::cout << "Enter width of the queue: ";
	std::cin >> width;
	queue = new int[width];
}

void Queue::init(int width)
{
	this->width = width;
	queue = new int[width];
}

void Queue::run()
{
	int choice = 0, element;
	while (choice != 4)
	{
		std::cout << "\n1. Insert\n"
			<< "2. Delete\n"
			<< "3. Display\n"
			<< "4. Exit\n"
			<< "Enter your choice (1-4): ";
		std::cin >> choice;
		switch (choice)
		{
			case 1: if (!isOverflow())
				{
					std::cout << "Enter element: ";
					std::cin >> element;
					insert(element);
					break;
				}
				else
				{
					std::cout << "OVERFLOW\n";
					break;
				}
			case 2: if (!isUnderflow())
				{
					std::cout << "Element deleted: " << del() << "\n";
					break;
				}
				else
				{
					std::cout << "UNDERFLOW\n";
					break;
				}
			case 3: if (!isUnderflow())
				{
					display();
					break;
				}
				else std::cout << "Queue empty\n";
				break;
			case 4: return ;
			default: std::cout << "Enter a value between 1-4\n";
				 break;
		}
	}
}

bool Queue::isOverflow()
{
	if (rear == front - 1)
		return true;
	else return false;
}

bool Queue::isUnderflow()
{
	if (front == rear)
		return true;
	else return false;
}

void Queue::insert(int element)
{
	if (rear == -1)
	{
		++front;
		++rear;
		queue[rear] = element;
	}
	else if (rear == width - 1)
	{
		rear = 0;
		queue[rear] = element;
	}
	else 
	{
		++rear;
		queue[rear] = element;
	}
}

int Queue::del()
{
	if (front == width - 1)
	{
		front = 0;
		return queue[width - 1];
	}
	else return queue[front++];
}

void Queue::display()
{
	if (rear < front)
	{
		for (int i = front; i <= width - 1; std::cout << queue[i++] << "\t");
		for (int i = 0; i <= rear; std::cout << queue[i++] << "\t");
	}
	else if (rear > front)
	{
		for (int i = front; i <= rear; std::cout << queue[i++] << "\t");
	}
}

int main()
{
	Queue queue;
	queue.init();
	queue.run();
	return 0;
}

