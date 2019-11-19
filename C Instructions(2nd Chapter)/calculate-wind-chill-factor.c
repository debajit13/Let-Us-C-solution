//program to calculate the wind chill factor
#include<stdio.h>
#include<math.h>
int main()
{
	float temperature,wcf,velocity;		//wcf=Wind Chill Factor, velocity=Wind velocity, temperature=air temperature
	printf("Enter the air temperature : ");		//taking air temperature as input
	scanf("%f",&temperature);
	printf("Enter the wind velocity : ");	//taking wind velocity as input
	scanf("%f",&velocity);
	wcf = 35.74 + 0.6215 * temperature + (0.4275 - 35.75) * pow(velocity,0.16);		//compute Wind Chill Factor
	printf("Wind Chill Factor : %.3f",wcf);
}
