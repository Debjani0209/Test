#include <stdio.h>
int main()
{
    int arr1[10][10],r,c,i,j,temp=1;
  
    printf("Enter the number of Rows and columns for the matrix :");
    scanf("%d%d",&r,&c);  
	printf("Enter the elements in the first matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
	        printf("element -[%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
        }
    }    
 	printf("The matrix is :\n");
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
	   {
		printf("% 4d",arr1[i][j]);
	    printf("\n");
	   }
	}

    for(i=0; i<r; i++)
    {
    	for(j=0; j<c; j++)
    	{
	 		if(arr1[i][j] != 1 && arr1[j][i] !=0)
	 		{
	   			temp= 0;
	   			break;
	   		}
	   	}
	}

    if(temp == 1 )
    {
		printf("The matrix is an identity matrix\n");
	}
    else
    {
		printf("The matrix is not an identity matrix\n");
	}
}

