#include <stdio.h>
int is_palindrome (int);
int main()
{
	int n,m;
	printf("Enter a number to check whether a given number is palindrome or not :");
	scanf("%d",&n);
	if(is_palindrome(n))
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
int is_palindrome (int n)
{
	int r,temp=n,sum=0;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n/=10;	
	}
	return temp==sum;
}
