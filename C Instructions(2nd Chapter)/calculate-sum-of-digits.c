//program to calculate sum of digits of a five digit number
#include<stdio.h>
int main()
{
	int d1,d2,d3,d4,d5;	//five digits of a number
	int sum,number;	//sum=sum of digits
	printf("_____Sum of Digit_____\n");
	printf("Enter a five digit number : ");
	scanf("%d",&number);
	d1 = number % 10;
	number = number / 10;
	d2 = number % 10;
	number = number / 10;
	d3 = number % 10;
	number = number / 10;
	d4 = number % 10;
	d5 = number / 10;
	sum = d1 + d2 + d3 + d4 + d5;	//calculate sum of the digits
	printf("Sum of digit : %d",sum);
	return 0;
}
