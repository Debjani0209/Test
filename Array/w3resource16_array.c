#include <stdio.h>
int main()
{
	int n,i,max1=0,max2=0,arr[50];
	printf("Enter the no of elements :");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
		if(arr[i]<max1 && arr[i]>max2)
		{
			max2=arr[i];
		}
	}
	printf(" The second largest number is %d",max2);
}
