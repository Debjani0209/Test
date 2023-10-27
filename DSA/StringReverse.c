#include<stdio.h>
int main()
{
	char string[10],stk[10];
	int i,top;
	printf("Enter the string:");
	gets(string);
	top=-1;
	for(i=0;string[i]='\0';i++)
	{
		top++;
		stk[top]=string[i];
	}
	i=top;
	while(i!=0)
	{
		printf("%c",stk[i]);
		i--;
	}
}
