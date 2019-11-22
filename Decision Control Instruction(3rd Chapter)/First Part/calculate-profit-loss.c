//program to 
#include<stdio.h>
#include<math.h>
int main()
{
	float costPrice,sellingPrice,price;	//costPrice and sellingPrice are the cost and selling price
	printf("Enter the Selling Price : ");
	scanf("%f",&sellingPrice);
	printf("Enter the Cost Price : ");
	scanf("%f",&costPrice);
	price = sellingPrice - costPrice;
	if(price < 0)	//when the difference is loss
		printf("The seller made loss. The Amount of loss is %.2f",fabs(price));
	else if(price > 0)	//when the difference is profit
		printf("The seller made profit. The amount of profit is %.2f",fabs(price));
	else
		printf("No loss incurred or profit earned");
}

