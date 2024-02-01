import java.util.Scanner;
class Array25
{
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int[][] arr1,arr2;
        int i,j,r,c,num;
        System.out.println("Enter the rows and columns of the first matrix:");
        r=sc.nextInt();
        c=sc.nextInt();
        System.out.println("Enter the Scaler input:");
        num=sc.nextInt();
       
            arr1=new int[r][c];
            arr2=new int[r][c];
            System.out.println("Enter the elements of the first matrix:");
            for(i=0;i<r;i++) 
            {
                for(j=0;j<c;j++) 
                {
                    System.out.print("elements [" + i + "][" + j + "]: ");
                    arr1[i][j]=sc.nextInt();
                }
            }
            System.out.println("The First matrix is:");
              for(i= 0;i<r;i++) 
              {
                  for(j=0;j<c;j++) 
                  {
                      System.out.println(arr1[i][j] + " ");
                  }
               }
            
            for(i=0;i<r;i++) 
            {
                for(j=0;j<c; j++) 
                {
                  arr2[i][j]=num*arr1[i][j];
                }
                    
            }
            System.out.println("The Multipication of the matrix is:");
              for(i= 0;i<r;i++) 
              {
                  for(j=0;j<c;j++) 
                  {
                      System.out.println(arr2[i][j] + " ");
                  }
               }
     }
           
}
