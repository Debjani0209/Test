#include <stdio.h>
int main()
{
    int arr1[50][50],arr2[60][70],arr3[40][50],i,j,k,r1,c1,r2,c2,sum=0;
	printf("Enter the rows and columns of first matrix : \n");
	scanf("%d %d",&r1,&c1);
	printf("Enter the rows and columns of second matrix : ");
	scanf("%d %d",&r2,&c2);
  	
  	if(c1!=r2)
	{
    	printf("Mutiplication of Matrix is not possible");
    }
  	else
    {
    	printf("Enter the elements in the first matrix :\n");
    }
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
 	printf("\nThe First matrix is :\n");
  	for(i=0;i<r1;i++)
    {
    	printf("\n");
    }
    for(j=0;j<c1;j++)
    {
		printf("%d\t",arr1[i][j]);
    }
  
  	printf("\nThe Second matrix is :\n");
  	for(i=0;i<r2;i++)
    {
    	printf("\n");
    }	
	for(j=0;j<c2;j++)
	{

    	printf("%d\t",arr2[i][j]);
    }

    for(i=0;i<r1;i++)
	{
	for(j=0;j<c2;j++)
	{
		arr3[i][j]=0;
	}
	}
    for(i=0;i<r1;i++)
	{ 
    for(j=0;j<c2;j++)
    {  
    	sum=0;
    }
    for(k=0;k<c1;k++)
    {
    	sum=sum+arr1[i][k]*arr2[k][j];
        arr3[i][j]=sum;
    }
    }
    printf("\nThe multiplication of two matrices is : \n");
    for(i=0;i<r1;i++)
    {
        printf("\n");
    }
    for(j=0;j<c2;j++)
    {
        printf("%d\t",arr3[i][j]);
    }
  }
