import java.util.Scanner;
class Array6 {
	public static void main(String[] args) 
	{
		int Size, i;
		int eCount = 0, oCount = 0;
		Scanner sc = new Scanner(System.in);
	    System.out.print(" Enter Number of elements in an array : ");
		Size = sc.nextInt();	
		int [] a = new int[Size];
		System.out.print("Enter elements of an Array  : ");
		for (i = 0; i < Size; i++)
		{
			a[i] = sc.nextInt();
		}   

		for(i = 0; i < Size; i++)
		{
			if(a[i] % 2 == 0)
			{
				eCount++;
			}
			else
			{
				oCount++;
			}
		}		
		System.out.println("Number of Even Numbers in this Array = " + eCount);
		System.out.println("Number of Odd  Numbers in this Array = " + oCount);
	}
}