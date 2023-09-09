#include<stdio.h>
void sum(int*,int*,int*,int*);
int main()
{
	int a,b,c,s;
	int *d,*e,*f;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	sum(&a,&b,&c,&s);
	printf("Sum of the three numbers %d",s);
}
void sum(int *a,int *b,int *c,int *s)
{
	*s=*a+*b+*c;
}
