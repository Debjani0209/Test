#include <stdio.h>
int main()
{
	int  i,j, c,n,arr[100];
	printf("Enter the no of elements:\n");  
    scanf("%d",&n);
    for(i=0; i<n; i++) 
    {
    	scanf("%d",&arr[i]);
	}
	printf("The unique elements are: ");
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				c++;
			}
		}
		if(c==1)
			printf("%d ",arr[i]);
	}
}
