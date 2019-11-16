//program to interchange the content of two locations
#include<stdio.h>
int main()
{
	int c,d,temp;	//c and d are the two locations, temp=temporary variable
	printf("_____Swapping Values of two locations_____\n");
	printf("Enter the value of C : ");
	scanf("%d",&c);
	printf("Enter the value of D : ");
	scanf("%d",&d);
	printf("Before Swapping: C = %d D = %d\n",c,d);
	// logic of swapping
	temp = c;
	c = d;
	d = temp;
	printf("After Swapping: C = %d D = %d",c,d);
	return 0;
}
