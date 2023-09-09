#include <stdio.h>
int is_perfect (int);
int main()
{
	int n;
	printf("Enter a number to check whether a given number is perfect or not :");
	scanf("%d",&n);
	if(is_perfect(n))
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
}
int is_perfect(int n)
{
	int i,sum=0;
	i=1;
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;	
	}
	return n==sum;
}
