#include <stdio.h>
int main ()
{
	int temp,n,r;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	r=0;
	temp=n;
	while(temp>0)
	{
		r=r*10;
		r=r+temp%10;
		temp=temp/10;
	}
	if (n==r)
	{
		printf("%d is a palindrome number\n",n);
	}
	else
	{
		printf("%d is not a palindrome number\n",n);
	}
}
