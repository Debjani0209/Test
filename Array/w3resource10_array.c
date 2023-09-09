#include <stdio.h>
int main()
{
	int i,n,j=0,k=0,arr1[20],arr2[40],arr3[50];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    
    printf("Enter the %d number to check if its even or odd : ",i);
    for(i=0;i<n;i++)
    {
		scanf("%d",&arr1[i]);
	}
    for(i=0; i<n; i++)
	{
		if (arr1[i]%2==0)
		{
			arr2[j++]==arr1[i];
		}
		else
		{
			arr3[k++]=arr1[i];
		}
	}
	printf("%d",arr3[0]);
	printf("\n The even numbers are :\n");
	for (i=0;i<j;i++)
	{
		printf("%d",arr2[i]);
	}
	printf("\n The odd numbers are:\n");
	for (i=0;i<k;i++)
	{
		printf("%d",arr3[i]);
	}
}
	
