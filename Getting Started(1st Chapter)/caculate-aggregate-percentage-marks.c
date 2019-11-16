//program to calculate aggregate and parcentage marks obtained by a student
#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5;	//s1,s2,s3,s4 & s5 are the marks of five subjects
	float aggregate,percentage;
	printf("_____Aggregate and Percentage Calculator_____\n");
	printf("Enter the marks of the first subject(maximum 100) : ");
	scanf("%f",&s1);
	printf("Enter the marks of the second subject(maximum 100) : ");
	scanf("%f",&s2);
	printf("Enter the marks of the third subject(maximum 100) : ");
	scanf("%f",&s3);
	printf("Enter the marks of the fourth subject(maximum 100) : ");
	scanf("%f",&s4);
	printf("Enter the marks of the fifth subject(maximum 100) : ");
	scanf("%f",&s5);
	aggregate = (s1 + s2 + s3 + s4 + s5) / 5;
	percentage = (s1 + s2 + s3 + s4 + s5) * 100 / 500;
	printf("Aggregate marks : %.2f\n",aggregate);
	printf("Percentage marks : %.2f",percentage);
	return 0;
}
