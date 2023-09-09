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
	
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if (arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sort number of ascending order :\n");
	for( i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
