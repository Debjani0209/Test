#include <stdio.h>
int main()
{
    int i,j,k,arr1[100][100],rowsum[100],columnsum[100],n;
    printf("Enter the size of the matrix : ");
    scanf("%d", &n); 
	printf("Enter the elements in the first matrix :\n");
	
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element : [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }  
	printf("The matrix is :\n");
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n ;j++)
	   {
		   printf("% d",arr1[i][j]);
	   }
	   printf("\n");
	}

    
    for(i=0;i<n;i++)
    {
	  rowsum[i]=0;
    }
	for(j=0;j<n;j++)
	{
	  	rowsum[i]=rowsum[i]+arr1[i][j];
	}
	
    for(i=0;i<n;i++)
    {
	    columnsum[i]=0;
	}
	for(j=0;j<n;j++)
	{
		columnsum[i]=columnsum[i]+arr1[j][i];
	}
	
 
    printf("The sum of rows and columns of the matrix is :\n");
    for(i=0;i<n;i++)
    {
		for(j=0;j<n;j++)
		{
		    printf("% d",arr1[i][j]);
	   		printf("% d",rowsum[i]);
		}
	    printf("\n");
    }
    
	for(j=0;j<n;j++)
    {
	    printf("% d",columnsum[j]);
    }
    printf("\n\n"); 
  }
