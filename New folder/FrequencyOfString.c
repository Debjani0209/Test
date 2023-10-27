#include<stdio.h>
int main()
{
	int n,i,arr[8];
	printf("Enter the Number of elements :");
	scanf("%d",&n);
	printf("Enter the string :");
	for(i=0;i<=n;i++)
	{
		printf("Elements : %s",i);
		scanf("%s",&arr[i]);
	}
}
