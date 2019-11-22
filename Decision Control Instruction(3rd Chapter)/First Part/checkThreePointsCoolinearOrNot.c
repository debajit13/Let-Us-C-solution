//program to check three points are fall on a line or not
#include<stdio.h>
main()
{
	int x1,x2,x3,y1,y2,y3,area;	//x1,x2,x3 are the 1st,2nd and 3rd points x Co-ordinates, y1,y2,y3 are the 1st,2nd and 3rd points y Co-ordinates
	
	printf("Enter the first point(x1,y1) : ");	//taking first point as input
	scanf("%d %d",&x1,&y1);
	
	printf("Enter the second point(x2,y2) : ");	//taking second point as input
	scanf("%d %d",&x1,&y2);
	
	printf("Enter the third point(x1,y1) : ");	//taking third point as input
	scanf("%d %d",&x3,&y3);
	
	area = x1 * (y2 - y3) + x2 * (y3 - y2) + x3 * (y1 - y2);	//calculate the area 
	
	if(area == 0)	//when area is 0, three points are Coolinear
		printf("All the three points are fall on a line");
		
	else	//when three points are not Coolinear
		printf("All the three points are not fall on a line");
}
