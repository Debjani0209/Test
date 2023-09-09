#include <stdio.h>
int second_largest(int[],int n);
int main()
{
    int arr[50],n,i,p;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++)
    {
    	printf("elements %d: ",i+1);
        scanf("%d",&arr[i]);
	}
	p=second_largest(arr,n);
	printf("Second largest element = %d",p);
	
}
int second_largest(int arr[],int n)
{
	int i,max1=0,max2=0;
	for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2&&arr[i]<max1)
        {
            max2=arr[i];
        }
	}
	
    return max2;
}

