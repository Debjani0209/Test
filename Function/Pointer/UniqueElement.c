#include<stdio.h>
void unique_element(int,int*);
int main()
{
	int n,i,arr[10];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements in an array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	unique_element(n,arr);
}
void unique_element(int n,int arr[])
{
	int i,j,c;
	for(i=0;i<n;i++)
	c=0;
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			c++;
		}
		if(c==1)
		{
			printf(arr[i]);
		}
		
	}
}
