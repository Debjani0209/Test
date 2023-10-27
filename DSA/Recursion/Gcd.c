#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,c;
	printf("Enter any 2 numbers :\n");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("GCD of %d & %d is : %d",a,b,c);
	
}
int gcd(int a,int b)
{
	if (a==b)
		return a;
	else if(a>b && a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
