import java.util.Scanner;
class Array19
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n; 
        System.out.println("Enter the number of elements :");
        n=sc.nextInt();   
        int arr[]=new int[n];
        System.out.println("Enter the elements of the array :");
        for(int i=0;i<n;i++) 
        {
            arr[i]=sc.nextInt();
        }
        int temp = 0; 
        for (int i = 0; i < n ;i++)
        {     
            for (int j = i+1; j < n; j++)
            {     
               if(arr[i] > arr[j]) 
               {    
                   temp = arr[i];    
                   arr[i] = arr[j];    
                   arr[j] = temp;    
               }     
            }     
        }    
        System.out.println("Elements of array sorted in ascending order: ");    
        for (int i = 0; i < n; i++) 
        {     
            System.out.print(arr[i] + " ");    
        }    
}
    
}
