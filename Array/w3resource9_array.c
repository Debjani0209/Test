#include <stdio.h>
int main()
{
	int n, max,i ,arr[50];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter value in Array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Maximum value of array is %d",max);
}
