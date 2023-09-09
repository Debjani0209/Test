#include <stdio.h>  
int main () 
{  
    int i, n,arr[20];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    for(i=0; i<n; i++)  
    {  
        printf("arr[%d]: ", i);  
        scanf("%d",&arr[i]);
    }
	printf("Elements in array are :");
    for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");	
}
