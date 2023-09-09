#include <stdio.h>
int strong_in_range(int,int);
int factorial(int);
int main()
{
	int start,end;
	printf("Enter starting and ending values :");
	scanf("%d%d",&start,&end);
	strong_in_range(start,end);
}
int strong_in_range(int start,int end)
{
	int num,sum=0;
	while(start!=end)
	{
		sum=0;
		num=start;
		while(num!=0)
		{
			sum+=factorial(num%10);
			num/=10;
	}
	return start==sum;
}
int factorial (int num)
{
	int fact=1;
	while(num>=1)
	{
		fact=fact*num;
		num-=1;
	}
	return fact;
	
}
