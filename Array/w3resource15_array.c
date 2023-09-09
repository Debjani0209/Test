#include <stdio.h>
int  main()
{
	int i,n,p,arr[50];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("Enter the position to delete element:");
	scanf("%d",&p);
	
	for (i=p-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("After deleting the element is :\n");
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

