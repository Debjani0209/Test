#include <stdio.h>
int main()
{
	int i, n,arr1[20],arr2[40];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr1[i]);
	}
    for(i=0; i<n; i++) 
    {
    	arr2[i]=arr1[i];
	}
	printf("elements copied into 2nd array are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
}
