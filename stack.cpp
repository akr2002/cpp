#include <iostream>

class Stack
{
	private:
		int top;
		int size;
		int *arr;

	public:
		Stack();
		Stack(int);
		~Stack();
		void run();
		inline bool isOverflow();
		void push();
		inline bool isUnderflow();
		void pop();
		void display();
} ;

Stack::Stack()
{
	top = -1;
	size = 0;
	arr = NULL;
	std::cout << "Enter width of the stack: ";
	std::cin >> size;
	arr = new int[size];
}

Stack::Stack(int size) 
{
	top = -1;
	this->size = size;
	arr = new int[size];
}

Stack::~Stack()
{
	delete[] arr;
}

void Stack::run()
{
	int option;
	std::cout << "\n1. Push an element to stack\n";
	std::cout << "2. Pop an element from stack\n";
	std::cout << "3. Display stack\n";
	std::cout << "4. Exit\n";
	std::cout << "Enter option (1-4): ";
	std::cin >> option;

	switch (option)
	{
		case 1: push(); break;
		case 2: pop(); break;
		case 3: display(); break;
		case 4: return ;
		default: run();
	}

	return ;

}

bool Stack::isOverflow()
{
	if (top == size - 1)
		return true;
	else return false;
}

void Stack::push()
{
	if (isOverflow())
	{
		std::cerr << "\nSTACK OVERFLOW\n";
		run();
	}
	else
	{
		int ele;
		std::cout << "Enter element: ";
		std::cin >> ele;
		arr[++top] = ele;
		run();
	}

	return ;
}

bool Stack::isUnderflow()
{
	if (top == -1)
		return true;
	else return false;
}

void Stack::pop()
{
	if (isUnderflow())
	{
		std::cerr << "\nSTACK UNDERFLOW\n";
		run();
	}
	else
	{
		--top;
		run();
	}

	return ;
}

void Stack::display()
{
	if (isUnderflow())
	{
		std::cerr << "\nSTACK UNDEFLOW\n";
		run();
	}
	else 
	{
		std::cout << arr[top] << " <-- \n";
		for ( int i = top - 1; i > -1; std::cout << arr[i--] << "\n" );
		run();
	}

	return ;
}

int main()
{
	Stack stack;
	stack.run();

	return 0;
}

