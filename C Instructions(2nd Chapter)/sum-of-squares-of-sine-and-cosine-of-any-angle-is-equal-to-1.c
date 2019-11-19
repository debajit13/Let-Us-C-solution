//program to check whether sum of squares of sine and cosine of any angle is equal to 1
#include<stdio.h>
#include<math.h>
int main()
{
	float theta,sum;	//theta=angle, sum=sum of squares of sine and cosine of angle
	printf("____Prove that Sum of squares of sine and cosine of any angle is equal to 1_____\n");
	printf("Enter the value of the angle : ");
	scanf("%f",&theta);
	sum = sqrt(pow(sin(theta),2)+(pow(cos(theta),2)));	//calculate sum of squares of sine and cosine of angle
	printf("%.2f",sum);
	return 0;
}
