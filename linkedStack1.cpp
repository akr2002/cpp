#include <iostream>

class Node
{
	public:
		int data;
		Node *link;
		Node();
};

class Stack
{
	private: 
		Node *start, *top;
	public:
		Stack();
		void run();
		void push();
		void pop();
		void display();
};

Node::Node()
{
	data = 0;
	link = nullptr;
}

Stack::Stack()
{
	start = top = nullptr;
}

void Stack::run()
{
	int choice = 0;
	while(choice != 4)
	{
		std::cout << "\n1. Push\n"
			<< "2. Pop\n"
			<< "3. Display\n"
			<< "4. Exit\n"
			<< "Enter your choice (1-4): ";
		std::cin >> choice;
		switch (choice)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			default: std::cout << "Invalid choice\n";
		}
	}
}

void Stack::push()
{
	Node *node = new Node;
	std::cout << "\nEnter data: ";
	std::cin >> node -> data;
	node -> link = nullptr;
	if (top == nullptr)
	{
		start = top = node;
	}
	else 
	{
		node -> link = top;
		top = node;
	}
}

void Stack::pop()
{
	Node *temp = top;
	top = top -> link;
	delete temp;
}

void Stack::display()
{
	Node *temp = top;
	if (temp == nullptr)
	{
		std::cout << "STACK UNDERFLOW\n";
		return ;
	}
	else
	{
		while (temp != nullptr)
		{
			std::cout << temp -> data << " ";
			temp = temp -> link;
		}
	}
}

int main()
{
	Stack stack;
	stack.run();
	return 0;
}

