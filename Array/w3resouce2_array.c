#include <stdio.h>
int main ()
{
	int  i, n,arr[20];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    for(i=0; i<n; i++)  
    {    
        scanf("%d",&arr[i]);
    }
    printf("The values store into the array in reverse are :\n");
    for(i=n-1;i>=0;i--)
    {
    	printf("%d ",arr[i]);
	}
}
