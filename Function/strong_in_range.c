#include <stdio.h>
int is_strong(int);
int factorial(int);
int main()
{
	int i,start,end;
	printf("Enter the starting and ending values :");
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		if(is_strong(i))
		{
			printf("%d\n",i);
		}
	}
	
}
int factorial (int n)
{
	int fact=1;
	while(n>=1)
	{
		fact=fact*n;
		n-=1;
	}
	return fact;
}

int is_strong(int n)
{
	int d,temp,sum=0;
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		sum+=factorial(d);
		temp/=10;
	}
	return n==sum;
}

