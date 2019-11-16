//program to convert and print distance in meters, feet, inches and centimeters
#include<stdio.h>
int main()
{
	float km,meter,centimeter,inch,foot;
	printf("_____Distance Coverter_____\n");
	printf("Enter the distance in Kilometers : ");
	scanf("%f",&km);
	// formula to convert distance
	meter =  km *  1000;
	centimeter = km * 100000;
	inch = km * 39370.0787;
	foot = km * 3280.8399;
	printf("Distance in meters : %.3f m\n",meter);
	printf("Distance in centimeters : %.3f cm\n",centimeter);
	printf("Distance in feet : %.3f ft\n",foot);
	printf("Distance in inches : %.3f inch\n",inch);
	return 0;
}
