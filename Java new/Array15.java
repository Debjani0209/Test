import java.util.Scanner;
class Array15
{
	public static void main(String[] args)
	{   
		Scanner input =new Scanner(System.in);
		System.out.print("Enter the First Array size :");
		int n =input.nextInt();
		System.out.print("Enter the Second Array size :");
		int m =input.nextInt();
		int a[] =new int[n];
		int b[] =new int[m];
		int c[] =new int[m+n];
		int k=0;
		for(int i=0;i<n;i++)
		{
			System.out.printf("Element of a[%d] :",i);
			a[i]=input.nextInt();
		}
		for(int i=0;i<m;i++)
		{
			System.out.printf("Element of b[%d] :",i);
			b[i]=input.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			c[k] = a[i];
			k++;
		}
		for(int i=0;i<m;i++)
		{
			c[k] = b[i];
			k++;
		}
		System.out.print("Merge two Arrays:");	
		for(int i=0;i<k;i++)
		{
			System.out.printf("a+b"=" ");
        }
    }
}

		
