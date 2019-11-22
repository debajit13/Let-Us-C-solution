//program to find whether the area of a rectangle is greater than its perimeter or not
#include<stdio.h>
main()
{
	float length,breath,area,perimeter;	//length and breath are the length and breath of a rectangle, area and perimeter are aree and perimeter of the rectangle
	
	printf("Enter the length of the rectangle : ");	//taking length as input
	scanf("%f",&length);
	
	printf("Enter the breath of the rectangle : ");	//taking breath as input
	scanf("%f",&breath);
	
	area = length * breath;	//calculate the area of the rectangle
	perimeter = 2 * (length + breath);	//calculate the perimeter of the rectangle 
	
	if(area > perimeter)	//when area is greater than the perimeter
		printf("Area of the rectangle is  greater than the perimeter");
		
	else if(area < perimeter)	//when area is lesser than the perimeter
		printf("Area of the triangle is lesser than the perimeter");
		
	else	//when area and perimeter are same
		printf("Area and the perimeter both are same");
}
