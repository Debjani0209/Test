#include <stdio.h>
int binary_search(int*,int,int,int);
int main()
{
	int n,i,key,start,end,arr[10];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("enter %d numbers in ascending order",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key element to be searched\n");
	scanf("%d",&key);
	binary_search(arr,0,n-1,key);
}
int binary_search(int arr[],int start,int end,int key)
{
	int mid; 
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==key)
		{
			printf("Found at %d",mid);
			break;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
	}
	if (start>end)
	{
		printf("not found");
	}
}
