//program to convert temperature from Fahrenheit to Centigrade degrees
#include<stdio.h>
int main()
{
	float fahrenheit,centigrade;
	printf("_____Temperature Conerter_____\n");
	printf("Enter the temperature in Fahrenheit degrees : ");
	scanf("%f",&fahrenheit);
	centigrade = 5 * (fahrenheit - 32) / 9; //formula to convert fahrenheit to centigrade
	printf("Temperature in Centigrade degrees : %.3f",centigrade);
	return 0;
}
