#include<stdio.h>
int fibonacci(int);
int main()
{
	int i,num;
	printf("Enter the number of elements:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d ",fibonacci(i));
	}
}
int fibonacci(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}
