#include <stdio.h>
int  main()
{
	int i,j, n,arr[50],temp;
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("sort number of descending order :\n");
	for( i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
