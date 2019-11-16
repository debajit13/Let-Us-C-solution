//program to find the cost price of one item
#include<stdio.h>
int main()
{
	float sellingPrice,profit;	//sellingPrice = selling price of 15 items, profit = total profit earned on 15 items
	float costPrice;	//costPrice = cost price of per item
	printf("_____Cost Price calculator_____\n");
	printf("Enter the selling price of 15 items : ");
	scanf("%f",&sellingPrice);
	printf("Enter the profit earned on 15 items : ");
	scanf("%f",&profit);
	costPrice = (sellingPrice - profit) / 15;	//formula to calculate cost price
	printf("Cost price of one item : %.2f",costPrice);
	return 0;
}
