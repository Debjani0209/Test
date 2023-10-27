#include <stdio.h>
int main() 
{
	int n,i,j,k;
	printf("Enter no of rows and columns: ");
	scanf("%d %d",&n,&k);
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<i+k;j++)
		{
			printf(" %d",j);
		}
	printf("\n");
	}
}
