#include <stdio.h>
int is_armstrong(int);
int count(int);
int power(int,int);

int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(is_armstrong(n))
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}
int is_armstrong(int n)
{
	int d,temp,sum=0;
	d=count(n);
	temp=n;
	while(n>0)
	{
		sum+=power(n%10,d);
		n/=10;
	}
	return temp==sum;
}
int count(int n)
{
	int c;
	while(n>0)
	{
		n/=10;
		c++;
	}
	return c;
}
int power(int x,int y)
{
	int i=0,mul=1;
	for(i=1;i<=y;i++)
	{
		mul*=x;
	}
	return mul;
}
