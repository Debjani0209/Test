#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int pop();
void push(int);

char post[MAX];
int stk[MAX], top = -1;

int main()
{
	int i, a, b, result, pEval;
	char ch;
	
	for(i=0; i<MAX; i++)
	{
		stk[i] = -1;
	}
	printf("\nEnter a postfix expression: ");
	scanf("%s",post);

	for(i=0; post[i] != '\0'; i++)
	{
		ch = post[i];

		if(isdigit(ch))
		{
			push(ch-'0');
		}
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			b = pop();
			a = pop();
			
			switch(ch)
			{
				case '+': result = a+b;
					  break;
				case '-': result = a-b;
					  break;
				case '*': result = a*b;
					  break;
				case '/': result = a/b;
					  break;
				case '%':result = a%b;
					  break;
			}
			
			push(result);
		}		
	
	}

	pEval = pop();
	
	printf("\nThe postfix evaluation is: %d\n",pEval);
	
	return 0;
}

void push(int n)
{
	if (top < MAX -1)
	{
		stk[++top] = n;
	}
	else
	{
		printf("Stack is full!\n");
		exit(-1);
	}
}
int pop()
{	
	int n;
	if (top > -1)
	{
		n = stk[top];
		stk[top--] = -1;
		return n;
	}
	else
	{
		printf("Stack is empty!\n");
		exit(-1);
	}
}	
