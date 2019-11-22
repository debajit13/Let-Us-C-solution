//program to determine a point is inside a circle or outside or on the circle
#include<stdio.h>
#include<math.h>
main()
{
	float x=0,y=0,radius=3,x1,y1,d;	//x,y are the center of the circle, radius=radius of the circle, x1,y1 are the Co-ordinate of the point, d=distance between center and point
	
	printf("Enter the Co-ordinate of point(x1,y1) : ");	//taking the Co-ordinate of the point as input
	scanf("%f %f",&x1,&y1);
	
	d = sqrt(pow(x1-x,2)-pow(y1-y,2));	//calculate the distance between center and the point
	
	if(d < radius)		//when point is inside of the circle
		printf("The point is inside of the circle");
		
	else if(d > radius)	//when point is outside of the circle
		printf("The point is outside of the circle");
		
	else				//when point is on the circle
		printf("The point is on the circle");
}
