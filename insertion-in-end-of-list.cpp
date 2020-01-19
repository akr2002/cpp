#include <iostream>

struct Node
{
	int info;
	Node* next;
} *start, * newptr, * save, * ptr, * rear;

Node* createNewNode(int);
void insertEnd(Node*);
void display(Node*);

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
			std::cerr << "\nNODE CREATION FAILED. ABORTING";
			return -1;
		}
		std::cout << "Inserting this node in the end of the list\n";
		insertEnd(newptr);
		std::cout << "\nNow the list is:\n";
		display(start);
		std::cout << "Enter Y to enter new nodes, N to exit: ";
		std::cin >> ch;
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

void insertEnd(Node* np)
{
	if (start == nullptr)
		start = rear = np;
	else
	{
		rear->next = np;
		rear = np;
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
