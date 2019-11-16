//program to calculate Ramesh's Gross Salary
#include<stdio.h>
int main()
{
	float bs,da,hra,gs;	//bs=basic salary, da=dearness allowance, hra=house rent allowance, gs=gross salary
	printf("_____Gorss Salary Calculator_____\n");
	printf("Enter the Basic Salary : ");
	scanf("%f",&bs);
	da = bs * 40 / 100;	
	hra = bs * 20 / 100;
	gs = bs + hra + da;	//formula to calculate gross salary
	printf("Gorss Salary : %.3f",gs);
	return 0;
}
