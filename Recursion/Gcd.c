#include<stdio.h>
int GCD(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers for G.C.D:");
	scanf("%d%d",&a,&b);
	printf("G.C.D of %d and %d if %d",a,b,GCD(a,b));
	
}
int GCD(int a,int b)
{
	if(a==b)
	{
		return a;
	}
	else if(a>b && a%b==0)
	{
		return b;
	}
	else
	{
		GCD(b,a%b);
	}
}

