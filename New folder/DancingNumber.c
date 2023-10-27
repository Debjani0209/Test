#include<stdio.h>
int is_dancing(int);
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(is_dancing(n))
	{
		printf("Dancing number");
	}
	else
	{
		printf("Not dancing number");
	}
}
int is_dancing(int n)
{
	int p,q,flag=0;
	if(n>=0 && n<=10)
	{
		flag=0;
	}
	else
	{
		while(n>10)
		{
			p=n%10;
			n/=10;
			q=n%10;
			if(p-q == 1 || p-q == -1)
			{
				flag=1;
				break;
			}
		}
		return flag==0;
	}
}
