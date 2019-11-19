//program to find the sum of first and last digit of a four-digit number
#include<stdio.h>
int main()
{
	int number,firstDigit,lastDigit;	//firstDigit and lastDigit are the 1st and 4th digit of number
	int sum;	//sum=sum of the first and last digit
	printf("_____Sum of the first and last digit_____\n");
	printf("Enter a four digit number : ");
	scanf("%d",&number);
	lastDigit = number % 10;
	firstDigit = number / 1000;
	sum = firstDigit + lastDigit;
	printf("Sum of first and last digit of the number : %d",sum);
	return 0;
}
