#include <stdio.h>
int linear_search(int,int,int*);
int main()
{
	int n,i,arr[10],key,position;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key element to be searched\n");
	scanf("%d",&key);
	position=linear_search(n,key,arr);
	if(position==0)
	{
		printf("key element not found");
		
	}
	else
	{
		printf("key element found at position %d",position);
	}
}
int linear_search(int n,int key,int arr[])
{
	int i,flag;
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	return flag;
}
