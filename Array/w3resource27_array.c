#include <stdio.h>
int main()
{
    int arr1[10][10],i,j,n;
    float det=0;
	printf("Enter the size of the matrix : ");
    scanf("%d", &n); 
	printf("Enter the elements in the first matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
	        printf("element - [%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
        }
    }  
	printf("The matrix is :\n");
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n ;j++)
	    {
	    	printf("% 4d",arr1[i][j]);
	    	printf("\n");
	    }
	}

    printf("zero in upper triangular matrix\n");
    for(i=0;i<n;i++)
    {
    	printf("\n");
    }
    for(j=0;j<n;j++)
    {
	
        if(i>=j)
        {
			printf("% 4d",arr1[i][j]);
		}
        else
        {
			printf("% 4d",0);
		}
    }
    printf("\n\n");
}

