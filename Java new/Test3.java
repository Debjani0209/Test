import java.util.Scanner;

public class Test3 {
    public static void main(String[] args) {
        Scanner obj_s = new Scanner(System.in);
        // System.out.println("Enter a number : ");
        // int a = obj_s.nextInt();

        int[] arr = new int[5];
        for(int i = 0; i < arr.length ; i++)
        {
            arr[i] = obj_s.nextInt();
        }
        for(int x : arr)
        {
            System.out.println(x);
        }


    }
}
