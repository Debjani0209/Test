import java.util.Scanner;

public class Array1 {
    public static void main(String[] args) {
    Scanner read = new Scanner(System.in);
    int arr[]=new int[5];
    System.out.println("Enter the number of elements:");
    for(int i=0 ;i <arr.length ; i++)
    {
        arr[i]=read.nextInt();
    }
    System.out.println("Elements in arary are:");
    for(int i=0 ;i <arr.length ; i++)
    {
    System.out.format("%d ",arr[i]);
    }
    System.out.println("\n");
    }
}

