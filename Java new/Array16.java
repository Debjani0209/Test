import java.util.Scanner;
class Array16
{
   public static void main(String[] args)
   {
      int i;
      Scanner scan = new Scanner(System.in);
      System.out.print("Enter the Size of Array: ");
      int n = scan.nextInt();
      int[] arr = new int[n];
      System.out.print("Enter Elements for the Array: ");
      for(i=0; i<n; i++)
      {
        arr[i] = scan.nextInt();
      }
      System.out.println("Reverse of Given Array is: ");
      for(i=(n-1); i>=0; i--)
      {
        System.out.print(arr[i]+ " ");
      }
   }
}