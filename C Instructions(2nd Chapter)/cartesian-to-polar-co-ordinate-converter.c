//program to convert Cartesian co-ordinates to Polar co-ordinates
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;	//x and y are cartesian co-ordinates
	float r,theta;	//r and theta are polar co-ordinates
	printf("_____Cartesian to Polar co-ordinate converter_____\n");
	printf("Enter the x co-ordinate: ");
	scanf("%f",&x);
	printf("Enter the y co-ordinate: ");
	scanf("%f",&y);
	//relation between cartesian and polar co-ordiantes
	r = sqrt(pow(x,2)+pow(y,2));	
	theta = atan(y/x);
	printf("In Polar co-ordiantes \nr = %.2f \ntheta = %.2f",r,theta);
	return 0;
}
