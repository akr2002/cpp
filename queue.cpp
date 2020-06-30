#include <iostream>

class Queue
{
	private: 
		int *arr;
		int front;
		int rear;
		int size;
		
	public:
		Queue();
		Queue(int);
		~Queue();
		void run();
		inline bool isOverflow();
		void insert();
		inline bool isUnderflow();
		void remove();
		void display();
} ;

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
	arr = NULL;
	front = -1;
	rear = -1;
	this->size = size;
	arr = new int[size];
}

Queue::~Queue()
{
	delete[] arr;
}

void Queue::run()
{
	int option;
	std::cout << "\n1. Insert element\n";
	std::cout << "2. Delete element\n";
	std::cout << "3. Display queue\n";
	std::cout << "4. Exit\n";
	std::cout << "Enter option: ";
	std::cin >> option;

	switch (option)
	{
		case 1: insert(); break;
		case 2: remove(); break;
		case 3: display(); break;
		case 4: return ;
		default: run();
	}

	return ;
}

bool Queue::isOverflow()
{
	if (rear == size -1)
		return true;
	else return false;
}

bool Queue::isUnderflow()
{
	if (front == -1)
		return true;
	else return false;
}

void Queue::insert()
{
	if (isOverflow())
	{
		std::cerr << "\nOVERFLOW\n";
		run();
	}
	else
	{
		int ele;
		std::cout << "Enter element: ";
		std::cin >> ele;
		if (rear == -1)
		{
			++front;
			++rear;
			arr[rear] = ele;
			run();
		}
		else
		{
			arr[++rear] = ele;
			run();
		}
	}

	return ;
}

void Queue::remove()
{
	if (isUnderflow())
	{
		std::cerr << "\nUNDERFLOW\n";
		run();
	}
	else
	{
		if (front == rear)
		{
			front = -1;
			rear = -1;
			run();
		}
		else
		{
			++front;
			run();
		}
	}

	return ;
}

void Queue::display()
{
	if (isUnderflow())
	{
		std::cerr << "\nUNERFLOW\n";
		run();
	}
	else
	{
		for ( int i = front; i < rear; std::cout << arr[i++] << " <- " );
		std::cout << arr[rear] << "\n";
		run();
	}

	return ;
}

int main()
{
	Queue queue;
	queue.run();

	return 0;
}

