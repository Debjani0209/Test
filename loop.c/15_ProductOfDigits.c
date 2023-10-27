#include <stdio.h>
int main()
{
	int a,p;
	printf("Enter any number:\n");
	scanf("%d",&a);
	p=1;
	while (a>0)
	{
		p = p*(a%10);
		a/=10;
	}
	
	printf("Product of the digits = %d\n",p);
}
