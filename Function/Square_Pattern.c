#include<stdio.h>
void square_pattern(int);
int main()
{
	int n;
	printf("Enter a number to from a pattern :");
	scanf("%d",&n);
	square_pattern(n);
	
}
void square_pattern(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
