#include<stdio.h>
void maximum(int*,int*,int*,int*);
int main()
{
	int a,b,c,max;
	int *d,*e,*f;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	maximum(&a,&b,&c,&max);
	printf("Maximum between these three numbers is %d",max);
}
void maximum(int *a,int *b,int *c,int *max)
{

	if(*f<*d && *d>*e)
	{
		max=*d;
	}
	else if(*d<*e && *e>*f)
	{
		max=*e;
	}
	else if(*d<*f && *f>*e)
	{
		max=*f;
	}
	
}
