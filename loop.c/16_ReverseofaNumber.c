#include <stdio.h>
int main()
{
	int n,d,sum;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	sum=0;
	while (n>0)
	{
		d=n%10;
		n/=10;
		sum=sum*10+d;
	}
	
	printf("Reverse of a sum = %d\n",sum);
}
