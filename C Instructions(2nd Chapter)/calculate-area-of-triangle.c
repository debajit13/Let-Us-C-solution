//program to find the area of a triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float s1,s2,s3;	//s1,s2 and s3 are the lengths of the three sides
	float semiPerimeter,area;	//area and semiperimeter are the area and semiperimeter of triangle
	printf("_____Find Area of any triangle_____\n");
	printf("(FAQ: The sum of any of the two sides of the triangle is always greater than the third one)\n");
	printf("Enter the three sides of triangle : ");
	scanf("%f%f%f",&s1,&s2,&s3);
	semiPerimeter = (s1 + s2 + s3) / 2;	//calculate semiperimeter of the triangle
	area = sqrt(semiPerimeter * (semiPerimeter - s1) * (semiPerimeter - s2) * (semiPerimeter - s3));	//calculate area of the triangle
	printf("Area of the triangle : %.2f",area);
	return 0;
}
