
import java.util.Scanner;
class Array30 
{
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int n,i,j;
        System.out.println("Enter the size of the square matrix:");
        n = sc.nextInt();

        int[][] arr1 = new int[n][n];
        int[] arr2= new int[n];
        int[] arr3 = new int[n];

        System.out.println("Enter the elements of the matrix:");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.print("elements[" + i + "][" + j + "]: ");
                arr1[i][j] = sc.nextInt();
            }
        }
        System.out.println("The matrix is:");
        for (i=0; i<n; i++) 
          {
              for (j=0; j<n; j++) 
              {
                  System.out.println(arr1[i][j]);
              }
          }


        for (i = 0; i< n; i++) 
        {
            arr2[i] = 0;
            for (j = 0; j< n; j++)
                arr2[i] += arr1[i][j];
        }

        for (i = 0; i<n; i++) 
        {
            arr3[i] = 0;
            for (j = 0; j < n; j++)
                arr3[i] += arr1[j][i];
        }
        System.out.println("The sum of rows and columns of the matrix is:");
        for (i = 0; i <n; i++) 
        {
            for (j = 0;j < n; j++) 
            {
                System.out.println(arr1[i][j]);
            }
        }
        System.out.println("The Sumation of rows and coloums is:");
        for (j = 0; j< n; j++) 
        {
            System.out.println(arr3[j]);
        }
        System.out.println();

       
    }
  }