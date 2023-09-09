#include <stdio.h>
int leapYear (int);
int main()
{
	int year;
	printf("Enter a year to check leap year or not:");
	scanf("%d",&year);
	if (leapYear(year))
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not Leap Year");
	}
}
int leapYear(int y)
{
	return (y%400==0)||((y%4==0)&&(y%100!=0));
			
}



