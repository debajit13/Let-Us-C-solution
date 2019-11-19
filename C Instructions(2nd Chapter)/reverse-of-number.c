//program to find the reverse of a five digit number
#include<stdio.h>
int main()
{
	int d1,d2,d3,d4,d5;	//five digits of a number
	int reverse,number;	//reverse=reverse number
	printf("_____Reverse Number_____\n");
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
	reverse = (d1 * 10000) + (d2 * 1000) + (d3 * 100) + (d4 * 10) + d5;	//calculate reverse of the number
	printf("Reverse of the number : %d",reverse);
	return 0;
}
