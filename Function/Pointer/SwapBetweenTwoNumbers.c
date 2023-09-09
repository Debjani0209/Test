#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a=%d;b=%d",a,b);
}
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
