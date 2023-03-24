#include "monty.h"

#define LIMIT 1000
void push(int element)
{
	int stack[LIMIT], top = 0;
	if (top == LIMIT- 1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		top++;
		stack[top]=element;
	}
}

void display()
{
	int stack[LIMIT], top, i;
	if (top == -1)
	{
		printf("Stack underflow\n"); /* Stack is empty */
	}
	else if(top > 0)
	{
		printf("The elements of the stack are:\n");
		for(i = top; i >= 0; i--) /* top to bottom traversal */
		{
			printf("%d\n",stack[i]);
		}
	}
}
