#include <stdio.h>
int main()
{
	int n, min,i ,arr[50];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter value in Array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Minimum value of array is %d",min);
}
