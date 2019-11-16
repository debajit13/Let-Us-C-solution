//program to calculate the area & perimeter of rectangle and area & circumference of circle
#include<stdio.h>
int main()
{
	float length,breath,areaRectangle,perimeter;
	float radius,areaCircle,circumference;
	printf("_____Area and Perimeter calculator of Rectangle and Area and Circumference calculator of Circle_____\n");
	//area and perimeter of rectangle calculator
	printf("Enter the length of the rectangle : ");
	scanf("%f",&length);
	printf("Enter the breath of the rectangle : ");
	scanf("%f",&breath);
	areaRectangle = length * breath;	//formula to calculate the area of a rectangle
	perimeter = 2 * (length + breath);	//formula to calculate the perimeter of a rectangle
	printf("Area of the rectangle : %.2f\n",areaRectangle);
	printf("Perimeter of the rectangle : %.2f\n",perimeter);
	//area and circumference of circle calculator
	printf("Enter the radius of the circle : ");
	scanf("%f",&radius);
	areaCircle = 3.14 * radius * radius;	//formula to calculate the area of a circle
	circumference = 2 * 3.14 * radius;		//formula to calculate the circumference of a circle		
	printf("Area of the circle : %.2f",areaCircle);
	printf("Circumference of the circle : %.2f",circumference);
	return 0;
}
