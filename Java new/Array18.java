import java.util.Scanner;
class Array_Search_Element
{
	public static void main(String[] args)
	{   
		Scanner input =new Scanner(System.in);
		System.out.print("Enter the Array size :");
		int l =input.nextInt();
		int arr[] =new int[l];
		for(int i=0;i<l;i++)
		{
			System.out.printf("Element of a[%d] :\n",i);
			arr[i]=input.nextInt();
		}
		System.out.println("Enter the Search Array Element :");
		int s =input.nextInt();
        int i;
		boolean flag=false;
		for(i=0; i<l; i++)
		{
			if(arr[i]==s)
			{				
				flag=true;
				break;
			}
		}
		if(flag=true)
		{
			System.out.printf("The Element is found in the position : %d\n", i + 1);
			System.out.printf("The Element is found in the index : %d\n", i);
		}
		else
		{
			System.out.println("The Element is Not found");
		}
    }
}
