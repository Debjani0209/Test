#include <stdio.h>
int main()
{
	int i,n,j,temp,arr[5];
	printf("Enter the number of elements :  ");
	scanf("%d",&n);
	printf("Enter the values :  ");
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
	printf("Bubble sorts value is %d",temp);
}
