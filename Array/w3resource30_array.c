#include <stdio.h>
int main()
{
    int arr1[100][100],arr2[100][100],i,j,r1,c1,r2,c2,flag =1;   
    printf("Enter the Rows and Columns of the 1st matrix :");
    scanf("%d %d",&r1,&c1);
	printf("Enter the Rows and Columns of the 2nd matrix :\n");
    scanf("%d %d",&r2,&c2);
	printf("Enter the elements in the first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
	        printf("element -[%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
        }
    } 
    printf("Enter the elements in the second matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
	        printf("element -[%d],[%d] : ",i,j);
	        scanf("%d",&arr2[i][j]);
        }
    }   
 	printf("The first matrix is :\n");
	for(i=0;i<r1;i++)
	{
	   for(j=0;j<c1 ;j++)
	   {
	    printf("% 4d",arr1[i][j]);
	    printf("\n");
	   }
	}
    printf("The second matrix is :\n");
	for(i=0;i<r2;i++)
	{
	   for(j=0;j<c2 ;j++)
	   {
	    printf("% 4d",arr2[i][j]);
	    printf("\n");
	   }
	}
    if(r1 == r2 && c1 == c2)
    {
    	printf("The Matrices can be compared\n");
    	for(i=0; i<r1; i++)
    	{
     		for(j=0; j<c2; j++)
     		{
			    if(arr1[i][j] != arr2[i][j])
				flag = 0;
				break;
			}
     	}
   	}
    else
    { 
		printf("The Matrices Cannot be compared :\n");
    }
    if(flag == 1 )
    {
		printf("Two matrices are equal\n");
	}
    else
    {
		printf("Two matrices are not equal\n");
	}
}
