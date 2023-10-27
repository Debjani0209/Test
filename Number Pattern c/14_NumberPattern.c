#include <stdio.h>
int main() 
{
	int n,i,j;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=n;j>n-i;j--)
		{
			printf(" %d",j);
		}
		for (j=1;j<=n-i;j++)
		{
			printf(" %d",(n-i+1));
		}
	printf("\n");
	}
}
