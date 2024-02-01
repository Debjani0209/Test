import java.util.Scanner;
class Array5 {
  public static void main(String[] args) {
    int n, max;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter total number of elements : ");
    n = sc.nextInt();
    int arr[] = new int[n];
    System.out.println("Enter all the elements:");
    for (int i = 0; i < n; i++) 
    {
      arr[i] = sc.nextInt();
    }
    for (int i = 0; i < n; i++) 
    {
      for (int j = i + 1; j < n; j++) {
        if (arr[i] > arr[j]) {
          max = arr[i];
          arr[i] = arr[j];
          arr[j] = max;
        }
      }
    }
    System.out.println("The Second Largest Element in the Array is :" + arr[n - 2]);
  }
}

