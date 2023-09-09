#include <stdio.h>
int  main()
{
	int i,j,n,p,arr[50];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("Enter the number to be inserted :");
	scanf("%d",&j);
	printf("Enter the position :");
	scanf("%d",&p);
	
	for (i=n;i>=p;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p]=j;
	printf("After insert the element is :\n");
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

