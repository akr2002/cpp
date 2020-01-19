#include <iostream>

struct Node
{
	int info;
	Node* next;
} *start, *newptr, *save, *rear, *ptr;

Node* createNewNode(int);
void display(Node*);
void insert(Node*);
void delNode();

int main()
{
	start = rear = nullptr;
	int inf;
	char ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		std::cout << "\nEnter information for the new node: ";
		std::cin >> inf;
		newptr = createNewNode(inf);
		if (newptr == nullptr)
		{
			std::cerr << "\nNODE CREATION FAILED. ABORTING\n";
			return -1;
		}
		insert(newptr);
		std::cout << "\nEnter Y to enter more nodes, N to exit: ";
		std::cin >> ch;
	}
	ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		std::cout << "\nThe list now is:\n";
		display(start);
		std::cout << "Delete first node? (Y/N): ";
		std::cin >> ch;
		if (ch == 'y' || ch == 'Y')
			delNode();
	}
	return 0;
}

Node* createNewNode(int n)
{
	ptr = new Node;
	ptr->info = n;
	ptr->next = nullptr;
	return ptr;
}

void insert(Node* np)
{
	if (start == nullptr)
		start = rear = np;
	else
	{
		rear -> next = np;
		rear = np;
	}
}

void delNode()
{
	if (start == nullptr)
		std::cerr << "\nUNDERFLOW\n";
	else
	{
		ptr = start;
		start = start->next;
		delete ptr;
	}
}

void display(Node* np)
{
	while (np != nullptr)
	{
		std::cout << np->info << " -> ";
		np = np->next;
	}
	std::cout << std::endl;
}

