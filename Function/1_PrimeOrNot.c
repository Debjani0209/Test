#include <stdio.h>
int is_prime (int);
int main()
{
	int n;
	printf("Enter a number to check whether a given number is prime or not :");
	scanf("%d",&n);
	if(is_prime(n))
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
}
int is_prime(int n)
{
	int i,d=0;
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			d=1;
			break;
		}
		i++;	
	}
	return d==0;
	
}

