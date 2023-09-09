#include <stdio.h>
int prime_in_range (int,int);
int main()
{
	int start,end;
	printf("Enter the starting and ending values :");
	scanf("%d%d",&start,&end);
	prime_in_range(start,end);
	
}
int prime_in_range(int start,int end)
{
	int i,j,d;
	for(i=start;i<=end;i++)
	{
		d=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				d=0;
				break;
			}
		}
		if(d==1)
		{
			printf("%d \n",i);
		}
	}
	
}

