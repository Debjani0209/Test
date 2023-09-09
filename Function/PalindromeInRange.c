#include <stdio.h>
int palindrome_in_range (int,int);
int main()
{
	int n,m;
	printf("Enter starting and ending values :");
	scanf("%d%d",&n,&m);
	palindrome_in_range(n,m);
}
	
int palindrome_in_range (int n,int m)
{
	int r,num,r_num,temp;
	for(num=n;num<=m;num++)
	{
		temp=num;
		r_num=0;
		while(temp)
		{
			r=temp%10;
			temp/=10;
			r_num=r_num*10+r;
		}
	}
	if(num==r_num)
	{
		printf("%d",num);
	}
}
