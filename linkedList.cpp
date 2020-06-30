#include <iostream>

class Node
{
	public:
		int data;
		Node *link;
		Node();
} ;

class List
{
	private:
		Node *head, *spare;
		bool isEmpty();
	public:
		void create();
		Node *getNode();
		void traverse();
		void insert(int data, int position);
		void append(Node *newNode);
		void del(int pos);
		void reverse();
		void run();
		void display();
		List();
} ;

Node::Node()
{
	data = 0;
	link = nullptr;
}

List::List()
{
	head = spare = nullptr;
}

void List::create()
{
	char ans;
	Node *node;
	while (true)
	{
		std::cout << "Add node?: ";
		std::cin >> ans;
		if (ans != 'y') break;
		node = getNode();
		append(node);
	}
}

Node *List::getNode()
{
	Node *newNode = new Node;
	std::cout << "\nEnter data: ";
	std::cin >> newNode -> data;
	newNode -> link = nullptr;
	return(newNode);
}

void List::append(Node *newNode)
{
	if (head == nullptr)
	{
		head = newNode;
		spare = newNode;
	}
	else
	{
		spare -> link = newNode;
		spare = newNode;
	}
}

void List::display()
{
	Node *temp = head;
	if (temp == nullptr)
		std::cout << "Empty list\n";
	else
	{
		while (temp != nullptr)
		{
			std::cout << temp -> data << " ";
			temp = temp->link;
		}
	}
	std::cout << std::endl;
}

void List::run()
{
	int choice = 0;
	while (choice != 3)
	{
		std::cout << "\n1. Create node\n"
			<< "2. Display\n"
			<< "3. Exit\n"
			<< "Enter option (1-3): ";
		std::cin >> choice;
		switch (choice)
		{
			case 1: create(); break;
			case 2: display(); break;
			case 3: return ;
			default: std::cout << "Inavlid option\n"; break;
		}
	}
}

int main()
{
	List list;
	list.run();
	return 0;
}

