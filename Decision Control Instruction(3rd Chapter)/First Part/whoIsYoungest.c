//program to determine who is youngest of Ram, Shyam and Ajay
#include<stdio.h>
main()
{
	int a1,a2,a3;	//a1=age of Ram, a2=age of Shyam, a3=age of Ajay
	
	printf("Enter the age of Ram : ");		//taking the age of Ram as input
	scanf("%d",&a1);
	
	printf("Enter the age of Shayam : ");	//taking the age of Shyam as input
	scanf("%d",&a2);
	
	printf("Enter the age of Ajay : ");		//taking the age of Ajay as input
	scanf("%d",&a3);
	
	if(a1 < a2 && a1 < a3)		//when Ram is youngest
		printf("Ram is the youngest");
		
	else if(a2 < a3 && a2 < a1)	//when Shyam is youngest
		printf("Shyam is the youngest");
		
	else	//when Ajay is youngest
		printf("Ajay is the youngest");
}
