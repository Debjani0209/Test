#include <stdio.h>
int main() 
{
	int n,i,j;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			if(i%2==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
