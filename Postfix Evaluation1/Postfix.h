#ifndef POSTFIX_H
#define POSTFIX_H

class Postfix
{
private:
	char* operators;
	char* expression;
	int* values;
	int width;
	int top;
public:
	Postfix(char* expression);
	~Postfix();
	bool isOverflow();
	bool isUnderflow();
	//int push(char op);
	int push(int num);
	int pop();
	void evaluate();
	void toInt(char *num);
	int result();
};

#endif