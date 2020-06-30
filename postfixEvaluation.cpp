#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>

struct Stack
{
	int top;
	unsigned int capacity;
	int *array;
} ;

Stack* createStack(unsigned int capacity)
{
	Stack* stack = new Stack();
	if (!stack) return nullptr;
	stack->top =-1;
	stack->capacity = capacity;
	stack->array = new int[(stack->capacity*sizeof(int))];
	if (!stack->array) return nullptr;
	return stack;
}

int isEmpty(Stack* stack)
{
	return stack->top == -1;
}

int peek(Stack* stack)
{
	return stack->array[stack->top];
}

int pop(Stack* stack)
{
	if (!isEmpty(stack))
		return stack->array[stack->top--];
	return '$';
}

void push(Stack* stack, int op)
{
	stack->array[++stack->top] = op;
}

int evaluatePostfix(char* exp)
{
	Stack* stack = createStack(strlen(exp));
	int i;
	if (!stack) return -1;
	for (i = 0; exp[i]; ++i)
	{
		if (exp[i] == ' ') continue;
		else if (isdigit(exp[i]))
		{
			int num = 0;
			while (isdigit(exp[i]))
			{
				num = num * 10 + (int)(exp[i] - '0');
				++i;
			}
			--i;
			push(stack, num);
		}
		else
		{
			int val1 = pop(stack);
			int val2 = pop(stack);
			switch (exp[i])
			{
				case '+': push(stack, val2 + val1); break;
				case '-': push(stack, val2 - val1); break;
				case '*': push(stack, val2 * val1); break;
				case '/': push(stack, val2 / val1); break;
			}
		}
	}
	return pop(stack);
}

int main()
{
	char exp[30];
	std::cout << "Enter expression: ";
	std::cin.getline(exp, 30);
	std::cout << evaluatePostfix(exp);
	return 0;
}

