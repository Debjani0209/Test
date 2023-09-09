#include <stdio.h>
int main ()
{
	int arr1[100][100],i,j,r,c,det=0;
    printf("Enter the number of rows and columns of the matrix : ");
    scanf("%d%d", &r,&c); 
	printf("Enter the elements in the first matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
	        printf("element - [%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
			if (arr1[i][j]==0)
			{
				++det;
			}
		}
    }
	if (det>((r*c)/2))
	{
		printf("This matrix is sparse matrix\n");
	}
	else
	{
	
		printf ("This matrix is not a sparse matrix\n");
	}

	printf ("There are %d number of zeros in the matrix\n",det);
}
