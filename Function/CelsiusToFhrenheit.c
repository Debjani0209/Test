#include<stdio.h>
void celsius_to_fhrenheit(float);
int main()
{
	float c;
	printf("Enter a number in degree celsius:");
	scanf("%f",&c);
	celsius_to_fhrenheit(c);
}
void celsius_to_fhrenheit(float c)
{
	printf("The Temperature %f celsius = %f fhrenheit",c,c*(9/5)+32);
	return;
}
