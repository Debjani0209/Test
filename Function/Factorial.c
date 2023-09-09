#include <stdio.h>
int is_factorial (int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
	int f =1;
	while(n>=1)
	{
		f=f*n;
		n-=1;
	}
	return f;
}
