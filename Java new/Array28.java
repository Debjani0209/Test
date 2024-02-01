import java.util.Scanner;
class Array28
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n,i,j,sum=0;
        System.out.print("Enter the size of the square matrix: ");
        n = sc.nextInt();
        int[][] arr =new int[n][n];
        System.out.println("Enter elements of the matrix:");
        for (i=0; i<n; i++) 
        {
            for (j=0; j<n; j++)
             {
                System.out.print("element[" + i + "][" + j + "]: ");
                arr[i][j] = sc.nextInt();
                if (i == j) 
                {
                    sum += arr[i][j];
                }
            }
        }
        System.out.println("The matrix:");
          for (i=0; i<n; i++) 
          {
              for (j=0; j<n; j++) 
              {
                  System.out.println(arr[i][j]);
              }
          }

        System.out.println("Summation of the right diagonal elements is: " + sum);
      }
}
