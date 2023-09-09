#include<stdio.h>
void bubble_sort(int*,int);
int main()
{
	int arr[50],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for (i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("The sorted array is\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	bubble_sort(arr,n);
	
	
}
void bubble_sort(int arr[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{

		for(i=0;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
