#include <stdio.h>
int main()
{
	int  i, n,arr[100],sum=0;
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    for(i=0; i<n; i++) 
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	
	printf("%d",sum);
	
}
