#include <stdio.h>
int main()
{
  int n,arr1[50][50],arr2[50][50],arr3[50][50],i,j;
       printf("Enter the size of the matrix : ");
       scanf("%d", &n); 
       printf("Enter the elements in the first matrix\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element :[%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
  
       printf("Enter the elements in the second matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element : [%d],[%d] : ",i,j);
	           scanf("%d",&arr2[i][j]);
            }
        }    
   printf("\nThe First matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");

      for(j=0;j<n;j++)
       {
           printf("%d\t",arr1[i][j]);
       }
    }
  
  printf("\nThe Second matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++) 
	    {
	  		printf("%d\t",arr2[i][j]);
	  	}
    } 
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            arr3[i][j]=arr1[i][j]-arr2[i][j];
   printf("\nSubtraction of two matrix is : \n");
   for(i=0;i<n;i++)
   {
       printf("\n");
       for(j=0;j<n;j++)
        {
	   
            printf("%d\t",arr3[i][j]);
        }
   }
   printf("\n\n");
}
