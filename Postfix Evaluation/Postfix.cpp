#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <cmath>
#include "Postfix.h"

Postfix::Postfix(char* expression)
{
    int NoOfOperators = 0;
    top = -1;
    width = strlen(expression);
    this->expression = new char[width];
    strcpy(this->expression, expression);
    for (int i = 0; this->expression[i] != '\0'; ++i)
    {
        switch(this->expression[i])
        {
            case '+': case '-': case '*': case '/': case '^': ++NoOfOperators;
        }
    }
    values = new int[NoOfOperators + 1];
    evaluate();
}

Postfix::~Postfix()
{
    delete[] expression;
    delete[] values;
}

bool Postfix::isOverflow()
{
    if (top == width - 1)
        return true;
    else return false;
}

bool Postfix::isUnderflow()
{
    if (top == -1)
        return true;
    else return false;
}

int Postfix::push(int num)
{
    if (isOverflow())
    {
        std::cout << "STACK OVERFLOW\n";
    }
    else
    {
        values[++top] = num;
    }
}

int Postfix::pop()
{
    if (isUnderflow())
    {
        std::cout << "STACK UNDERFLOW\n";
    }
    return values[top--];
}

void Postfix::evaluate()
{
    int i = 0;
    int initial = i;
    char temp[6];
    bool numFound = false;
    while (expression[i] != '\0')
    {
        int j = 0;
        while (isdigit(expression[i]))
        {
            numFound = true;
            temp[j] = expression[i];
            ++i; ++j;
        }
        if (numFound)
        {
            toInt(temp);
            numFound = false;
        }
        else if (expression[i] == ',')
        {
            ++i; continue;
        }
        else
        {
            int val1 = pop();
            int val2 = pop();
            switch (expression[i])
            {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                case '^': push(pow(val1, val2)); break;
            }
        }
    }
    ++i;
}

void Postfix::toInt(char* num)
{
    const char* temp = num;
    int value;
    sscanf(temp, "%d", &value);
    push(value);
}

int Postfix::result()
{
    return pop();
}
