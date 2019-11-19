//program to receive longitude and latitude in degrees, of two places on earth and output distance between them in nautical miles
#include<stdio.h>
#include<math.h>
int main()
{
	float lo1,lo2,la1,la2,distance;		//la1 and lo1 are the longitude and latitude of the first point, la2 and lo2 are the longitude and latitude of the second point
	printf("Enter the longitude and latitude of the first point : ");	//taking the 1st point's longgitude and latitude as input
	scanf("%f %f",&lo1,&la1);	
	printf("Enter the longitude and latitude of the second point : ");	//taking the 2nd point's longitude and latitude as input
	scanf("%f %f",&lo2,&la2);
	distance = 3963 * acos((sin(la1)*sin(la2)) + (cos(la1)*cos(la2)) * cos(lo2 - lo1));		//compute the distance in nautical miles
	printf("Distance between the two points in miles : %f",distance);
}
