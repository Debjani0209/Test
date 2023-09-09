#include<stdio.h>
void fhrenheit_to_celsius(float);
int main()
{
	float f;
	printf("Enter a number in degree fhrenheit:");
	scanf("%f",&f);
	fhrenheit_to_celsius(f);
}
void fhrenheit_to_celsius(float f)
{
	printf("The Temperature %f fhrenheit = %f celsius",f,(f-32)*5/9);
	return;
}
