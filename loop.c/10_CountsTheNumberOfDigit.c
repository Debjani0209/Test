#include <stdio.h>
int main()
{
	int c=0,n;
	printf("Enter a number :",n);
	scanf("%d",&n);
	
	
	while (n!=0)
	{
		n=n/10;
		c++;
	}
	printf("Digits %d",c);
	
	
	
}
