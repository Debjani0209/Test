#include <stdio.h>
int is_Perfect (int,int);
int main()
{
	int i,start,end;
	printf("Enter starting and ending values :");
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		if(is_perfect(i))
		{
			printf("%d \n",i);
		}
	}
}
int is_perfect(int num)
{
	int i,j,n=num,sum=0;
	for (i=1;i<n;i++)
	{
		if(n%i==0)
			{
				sum+=i;
			}
	}	
	return num==sum;
}
