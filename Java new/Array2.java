
import java.util.Scanner;
public class Array2 {
	
	public static void main(String[] args) {
		int i;	
		 Scanner sc = new Scanner(System.in);
		int[] Neg_arr = new int[5];
		
		System.out.format("Enter negative Array %d elements : ",Neg_arr.length);
		for(i = 0; i < Neg_arr.length; i++) 
		{
			Neg_arr[i] = sc.nextInt();
		}
		
		System.out.println("List of Negative Numbers in Array : ");
		for(i = 0; i < Neg_arr.length; i++) 
		{
			if(Neg_arr[i] < 0) {
				System.out.format("%d  ", Neg_arr[i]);
			}
		}
	}
}
