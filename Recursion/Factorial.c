#include<stdio.h>
int factorial(int);
int main()
{
	int i,n;
	printf("Enter number for factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d! =%d\n",i,factorial(i));
	}
}
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}
