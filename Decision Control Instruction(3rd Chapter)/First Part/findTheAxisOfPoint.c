//program to find a point lies on which axis
#include<stdio.h>
main()
{
	float x,y;	//Co-ordinate of the point
	
	printf("Enter the Co-ordinate of the point(x,y) : ");	//taking the Co-ordinate of the point as input
	scanf("%f %f",&x,&y);
	
	if(x == 0 && y != 0)		//when point lies on the Y axis
		printf("point lies on the Y-axis");
		
	else if(x != 0 && y == 0)	//when point lies on the X axis
		printf("point lies on the X-axis");
		
	else if(x == 0 && y == 0)	//when point lies on the origin
		printf("point lies on the origin");
		
	else						//when point doesn't lies on any axis
		printf("point doesn't lies on any axis");
}
