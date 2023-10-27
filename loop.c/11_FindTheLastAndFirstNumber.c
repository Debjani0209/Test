#include <stdio.h>
int main()
{
	int n,first,last,c;
	printf ("Enter any numbers:");
	scanf("%d",&n);
	
	printf("Last digit is = %d\n",n%10);
	while (n>=10)
	{
		n=n/10;
	}
	
	printf("First digit = %d",n);
}
