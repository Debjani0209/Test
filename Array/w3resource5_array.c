#include <stdio.h>
int main()
{
	int i,j,n,arr1[20],arr2[40],c=0;
	printf("Enter the no of elements:");  
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr1[i]);
    	arr2[i]=0;
	}
    for(i=0; i<n; i++) 
    {
    	for (j=0;j<n;j++)
    	{
    		if (arr1[i]==arr1[j])
    		{
    			if(arr2[j]!=0)
    				break;
    			arr2[i]++;
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr2[i]>1)
			c++;
//		printf("%d -> %d\n",arr1[i],arr2[i]);
	}
	printf("The number of duplicate elements is %d",c);
}
