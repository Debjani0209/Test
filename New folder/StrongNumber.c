#include<stdio.h>
int is_strong_num(int);
int factorial(int);

int main()
{
	int n;
	printf("Enter a number to check the number strong or not :");
	scanf("%d",&n);
	if(is_strong_num(n))
	{
		printf("Strong...");
	}
	else
	{
		printf("Not strong....");  
	}
}


int is_strong_num(int n)
{
	int a,temp,sum=0;
	temp=n;
	while(temp>0)
	{
		a=temp%10;
		sum+=factorial(a);
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
