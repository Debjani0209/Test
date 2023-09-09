#include <stdio.h>
int is_strong(int);
int factorial(int);
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(is_strong(n))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
int is_strong(int n)
{
	int d,temp,sum=0;
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		sum+=factorial(d);
		temp/=10;
	}
	return n==sum;
}
int factorial (int n)
{
	int fact=1;
	while(n>=1)
	{
		fact=fact*n;
		n-=1;
	}
	return fact;
}
