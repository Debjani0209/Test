#include <stdio.h>
int main()
{
	int  i,j, n1,n2,arr1[100],arr2[50],arr3[60];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n1,&n2);
    printf("Enter the no of 1st arary:\n");
    scanf("%d",arr1[i]);
    printf("Enter the no of 2nd array:\n");
    
    for(i=0; i<n1; i++) 
    {
    	scanf("%d",&arr1[i]);
	}
	for(j=0; j<n2; j++) 
    {
    	scanf("%d",&arr2[j]);
	}
	for(i=0;i<n1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<n2;j++,i++)
	{
		arr3[i]=arr2[j];
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d",arr3[i]);
	}
}
