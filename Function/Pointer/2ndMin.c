#include <stdio.h>
int second_minimum(int[],int);
int main()
{
    int arr[50],n,i,p;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++)
    {
    	printf("elements %d : ",i+1);
        scanf("%d",&arr[i]);
	}
	p=second_minimum(arr,n);
	printf("Second minumum element = %d",p);
	
}
int second_minimum(int arr[],int n)
{
	int i,min;
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
    return min;
}


