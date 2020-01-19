#include <iostream>

struct Node
{
	int info;
	Node *next;
} *start, // points to the beginning of the list	
  *newptr, *save, *ptr;

Node *CreateNewNode( int ); // takes an integer argument, allocates memory to create a new node and returns the pointer the new node
void InsertBeg( Node* ); // inserts the accepted argument in the beginning of list
void display( Node* );

int main()
{
	start = NULL;
	int inf;
	char ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		std::cout << "\nEnter information for the new node: ";
		std::cin >> inf;
		newptr = CreateNewNode(inf);
		if (newptr != NULL)
			std::cout << "Node created successfully\n";
		else 
		{
			std::cout << "Error creating node\n";
			return -1;
		}
		std::cout << "Inserting this node in the beginning of list...\n";
		InsertBeg(newptr);
		std::cout << "Now the list is:\n";
		display(start);
		std::cout << "Press 'y' to insert new nodes, 'n' to exit: ";
		std::cin >> ch;
	}

	return 0;
}

Node *CreateNewNode(int n)
{
	ptr = new Node;
	ptr -> info = n;
	ptr -> next = NULL;
	return ptr;
}

void InsertNode(Node *np)
{
	if (start == NULL)
		start = np;
	else
	{
		save = start;
		start = np;
		np -> next = save;
	}
}

void display(Node *np)
{
	while (np != NULL)
	{
		std::cout << np -> info << " -> ";
		np = np -> next;
	}
	std::cout << std::endl;
}

