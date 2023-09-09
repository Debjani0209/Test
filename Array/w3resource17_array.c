#include <stdio.h>
int main()
{
	int n,i,min1,min2,arr[50];
	printf("Enter the no of elements :");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(arr[0]>arr[1])
	{
		min1 = arr[1];
		min2 = arr[0];
	}
	else
	{
		min1 = arr[0];
		min2 = arr[1];
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<min1)
		{
			min2=min1;
			min1=arr[i];
		}
		else if(arr[i]>min1 && arr[i]<min2)
		{
			min2=arr[i];
		}
	}
	printf(" The second smallest number is %d",min2);
}
