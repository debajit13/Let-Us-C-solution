//program to find any integer is odd or even
#include<stdio.h>
main()
{
	int number;	//number=integer number
	
	print("Enter the number : ");	//taking number as input
	scanf("%d",&number);
	
	if(number % 2 == 0)		//check the number is even
		print("Number is an even number");
		
	else	//when number is odd
		printf("Number is a odd number");
}
