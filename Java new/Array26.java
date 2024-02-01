import java.util.Scanner;
class Array26
{
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int[][] arr,arr1,arr2;
        int i,j,k,r,c,r1,c1,sum;
        System.out.println("Enter the rows and columns of the first matrix:");
        r=sc.nextInt();
        c=sc.nextInt();
        System.out.println("Enter the rows and columns of the second matrix:");
        r1=sc.nextInt();
        c1=sc.nextInt();
        if(c==r1) 
        {
            arr=new int[r][c];
            arr1=new int[r1][c1];
            arr2=new int[r][c1];
            System.out.println("Enter the elements of the first matrix:");
            for(i=0;i<r;i++) 
            {
                for(j=0;j<c;j++) 
                {
                    System.out.print("elements [" + i + "][" + j + "]: ");
                    arr[i][j]=sc.nextInt();
                }
            }
            System.out.println("Enter the elements of the second matrix:");
            for(i=0;i<r1;i++) 
            {
                for(j=0;j<c1;j++) 
                {
                    System.out.print("elements [" + i + "][" + j + "]: ");
                    arr1[i][j]= sc.nextInt();
                }
            }
            System.out.println("The First matrix is:");
              for(i= 0;i<r;i++) 
              {
                  for(j=0;j<c;j++) 
                  {
                      System.out.println(arr[i][j] + " ");
                  }
               }
            System.out.println("The Second matrix is:");
            for(i= 0;i<r1;i++) 
            {
                for(j=0;j<c1;j++) 
                {
                    System.out.println(arr1[i][j] + " ");
                }
              }
            for(i=0;i<r;i++) 
            {
                for(j=0;j<c1; j++) 
                {
                    sum=0;
                    for(k=0;k<c;k++) 
                    {
                        sum+=arr[i][k]*arr1[k][j];
                    }
                    arr2[i][j]=sum;
                }
            }

            System.out.println("The multiplication of two matrices is:");
            for(i= 0;i<r; i++) 
              {
                  for(j=0;j<c1; j++) 
                  {
                      System.out.println(arr2[i][j] + " ");
                  }
              } 
        }    
    }
  }
