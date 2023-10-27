#include <stdio.h>
int main ()
{
	int n,last,first,sum;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	first=n;
	while (first>=10)
	{
		first/=10;
	}
	last = n%10;
	sum = first+1;
	printf("Sum of first and last digit : %d \n",sum);
}
