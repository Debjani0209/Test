import java.util.Scanner;
class Array8 {
	public static void main(String[] args) 
	{
		int n, i;
		Scanner sc = new Scanner(System.in);
	    System.out.print("Enter Number of elements in an array : ");
		n= sc.nextInt();	
		int [] a = new int[n];
		int [] b = new int[n];
		System.out.print(" Enter elements of an Array  : ");
		for (i = 0; i < n; i++)
		{
			a[i] = sc.nextInt();
		}   
		for (i = 0; i <n; i++)
		{
			b[i] = a[i];
		} 
		System.out.println("Elements in 2nd Array after Copying are");
		for (i = 0; i < n; i++)
		{
			System.out.println(" Element at b["+ i +"] = " + b[i]);
		}
	}
}
