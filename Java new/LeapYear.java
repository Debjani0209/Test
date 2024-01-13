import java.util.Scanner;
class LeapYear {
    public static void main(String[] args) {
        Scanner year = new Scanner (System.in);
        System.out.println("Enter a year:");
        int a= year.nextInt();

        if((a%400==0) || (a%100!=0) && (a%4==0))
	    {
		    System.out.println("Leap year");
	    }
	    else
	    {
		    System.out.println("Not leap year");
	    }
    }

}
