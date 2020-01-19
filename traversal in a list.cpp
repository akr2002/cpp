#include <iostream>

struct Node
{
	int info;
	Node* next;
} *start, *newptr, *save, *ptr, *rear;

Node* createNewNode(int);
void insert(Node*);
void traverse(Node*);

int main()
{
	start = rear = nullptr;
	int inf;
	char ch = 'y';
	while (ch == 'Y' || ch == 'y')
	{
		std::cout << "\nEnter information for the new node: ";
		std::cin >> inf;
		newptr = createNewNode(inf);
		if (newptr == nullptr)
		{
			std::cout << "\nNODE CREATION FAILED. ABORTING\n";
			return -1;
		}
		insert(newptr);
		std::cout << "\nEnter Y to enter new nodes, N to exit: ";
		std::cin >> ch;
	}
	std::cout << "\nThe list now is:\n";
	traverse(start);
	return 0;
}

Node *createNewNode(int n)
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
		rear->next = np;
		rear = np;
	}
}

void traverse(Node* np)
{
	while (np != nullptr)
	{
		std::cout << np->info << " -> ";
		np = np->next;
	}
	std::cout << std::endl;
}

