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
		Node *head, *tail;
	public:
		List();
		void run();
		void create();
		void insert();
		//void append(Node*);
		void display();
		void remove();
} ;

Node::Node()
{
	data = 0;
	link = nullptr;
}

List::List()
{
	head = tail = nullptr;
}

void List::run()
{
	int choice = 0;
	while (choice != 4)
	{
		std::cout << "\n1. Create node\n"
			<< "2. Delete node\n"
			<< "3. Display list\n"
			<< "4. Exit\n"
			<< "Enter your choice (1-4): ";
		std::cin >> choice;
		switch (choice)
		{
			case 1: create(); break;
			case 2: remove(); break;
			case 3: display(); break;
			case 4: return ;
			default: std::cout << "Invalid choice\n";
		}
	}
}

void List::create()
{
	Node *node = new Node;
	std::cout << "\nEnter data: ";
	std::cin >> node -> data;
	if (tail == nullptr)
	{
		head = node;
		tail = node;
		node -> link = nullptr;
	}
	else
	{
		tail -> link = node;
		tail = node;
	}
	//append(node);
}

/*void List::apprnd(Node* node)
{
	
}*/

void List::remove()
{
	Node *temp = head;
	head = head -> link;
	delete temp;

}

void List::display()
{
	Node *temp = head;
	if (temp == nullptr)
	{
		std::cout << "\nList is empty\n";
		return ;
	}
	else
	{
		while(temp != nullptr)
		{
			std::cout << temp -> data << " ";
			temp = temp -> link;
		}
		std::cout << std::endl;
	}
}

int main()
{
	List list;
	list.run();
	return 0;
}


