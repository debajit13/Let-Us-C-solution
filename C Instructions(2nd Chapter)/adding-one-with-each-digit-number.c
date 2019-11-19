//program to print a new number by adding one to each of its digits
#include<stdio.h>
int main()
{
	int number,newNumber;	//newNumber=after adding one with each digit of a number
	int d1,d2,d3,d4,d5;		//digit of number
	printf("_____Adding one with each digit of number_____\n");
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
	//calculate newNumber after adding one with each digit
	newNumber = (d5 + 1) * 10000 + (d4 + 1) * 1000 + (d3 + 1) * 100 + (d2 + 1) * 10 + (d1+1);	
	printf("New Number : %d",newNumber);
	return 0;
}
