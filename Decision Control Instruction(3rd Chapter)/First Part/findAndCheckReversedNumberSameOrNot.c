//program to find the reverse number and check if the number and the reversed number are same or not
#include<stdio.h>
main()
{
	int number,reverse=0,temp;	//reverse=reversed number, number=input number
	
	printf("Enter the number : ");	//taking the number as input
	scanf("%d",&number);
	
	temp = number;	
	while(temp != 0)	//find the reversed number
	{
		reverse = (reverse * 10) + (temp % 10);
		temp = temp / 10;
	}
	
	if(number == reverse)	//when the number and the reversed number are same 
		printf("Number and the reversed number are same");
		
	else	//when the reversed number and the number are not same
		printf("Number and the reversed number are not same");
}
