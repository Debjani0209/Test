class Test{
    public static void main(String sankha[])
    {
        // int a = 5;
        // float b = (float)7.5;
        // String name = "Sankha";

        // System.out.println("Hello");
        // System.out.println("Hello "+name);
        // System.out.println(a+" "+b);
        // System.out.println(5<<2);

        // int i=0;
        // for(;;)
        // {
        //     if(i==10)
        //         break;
        //     i++;
        // };
        // System.out.println(i);

        float arr[] = new float[10];
        int []arr2 = new int[50];
        int[] arr3 = new int[50]; 
    
        // int n = 10;
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = (i+1)*0.1f;
        }   
        // for(int i=0; i<n; i++)
        // {
        //     System.out.println(arr[i]);
        // }

        // System.out.println(arr.length);
        // System.out.println(arr[50]);

            
        // for(float x : arr)
        // {
        //     if(x == 0.1f)
        //         continue;
        //     if(x == 0.4f)
        //         break;
        //     System.out.println(x);
        // }
        boolean flag = false;
        a:
        for(int i = 1; i < 10; i+=1)
        {
            // b:
            for(int j = 1; j < i; j+=1)
            {
                System.out.print("*");
                if(j==5)
                {   
                    // flag = true;
                    break a;
                }
            }
            System.err.println();
            // if(flag == true)
            //     break;
        }

    }
}