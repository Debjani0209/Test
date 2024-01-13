import java.util.Scanner;
class Array9
{
   public static void main(String[] args)
   {
      int n,i, next;
      System.out.print("Enter the Element in an array: ");
      Scanner scan = new Scanner(System.in);
      n = scan.nextInt();
      int[] arr = new int[n];
      System.out.print("Enter Elements: ");
      for(i=0; i<n; i++)
         arr[i] = scan.nextInt();
      
      System.out.print("Enter an Element to Insert: ");
      next = scan.nextInt();
      arr[i] = next;
      
      System.out.println("The new array is: ");
      for(i=0; i<n+1; i++)
         System.out.print(arr[i]+ " ");
   }
}
