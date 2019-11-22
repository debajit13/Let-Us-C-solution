//program to check a triangle is valid or not
#include<stdio.h>
main()
{
	float a1,a2,a3,sum;		//a1,a2 and a3 are the three angles of a triangle, sum=sum of a1,a2 and a3
	
	printf("Enter the three angles of the triangle : ");	//taking three angles as input
	scanf("%f %f %f",&a1,&a2,&a3);
	
	sum = a1 + a2 + a3;		//calculate the sum of three angles
	
	if(sum == 180)	//when the triangle is valid 
		printf("Triangle is valid");
		
	else			//when the triangle is invalid
		printf("Triangle is invalid");
}
