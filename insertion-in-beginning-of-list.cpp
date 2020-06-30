#include <iostream>

struct Node
{
    int info;
    Node* next;
} *start, *newptr, *save, *ptr;

Node* createNewNode(int);
void insertBeg(Node*);
void display(Node*);

int main()
{
    start = nullptr;
    int inf;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        std::cout << "Enter information for the new node: ";
        std::cin >> inf;
        newptr = createNewNode(inf);
        if (newptr == nullptr)
        {
            std::cout << "NODE CREATION FAILED. ABORTING";
            return -1;
        }
        std::cout << "Inserting the node to the beginning of the list\n";
        insertBeg(newptr);
        std::cout << "\nNow the list is:\n";
        display(start);
        std::cout << "Enter Y to enter more nodes, N to exit: \n";
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

void insertBeg(Node* np)
{
    if (start == nullptr)
        start = np;
    else
    {
        save = start;
        start = np;
        np->next = save;
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
