//program to find the absolute value of a number
#include<stdio.h>
main()
{
	int number;		
	
	printf("Enter the number : ");	//taking number as input
	scanf("%d",&number);
	
	if(number < 0)	//if the number is a negative number
		number = (-1) * number;
		
	printf("Absolute value of the number is : %d",number);
}
