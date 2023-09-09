#include <stdio.h>
int main()
{
	int n,arr[6],key,i,flag;
	printf("Enter the no of elements:  ");
	scanf("%d",&n);
	printf("Enter the elements:  ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements you want to find:  ");
	scanf("%d",key);
	
	for (i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Found at position %d",i+1);
			flag==1;
			break;
		}
	}
	if (flag==0)
	{
		printf("Not found");
	}
	 
}
