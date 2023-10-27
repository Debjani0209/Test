#include<stdio.h>
#include<string.h>
int top=-1;
int main()
{
	int i;
	char stk[100];
	puts("Enter the Expression:");
	gets(stk);
	for(i=0;i<=strlen(stk);i++);
	{
		push(stk(i));
	}
	
}
void push(int e)
{
	if(isFull())
	{
		printf("Stack overflow\n");
		
	}
	else
	{
		stk[++top]=e;	
	}
}
int pop()
{
	int temp;
	if(isEmpty())
	{
		printf("Stack underflow\n");
	}
	else
	{
		return stk [top--];
	}
}
