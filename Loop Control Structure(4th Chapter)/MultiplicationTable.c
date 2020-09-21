//Generate Multiplication Table

#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter Number for Multiplication Table: ");
    scanf("%d",&num);
    printf("Multiplication Table of %d:\n",num);
    for(n=1;n<=10;n++)
    {
    	printf("%d X %d = %d\n",num,n,num*n);
	}
    return 0;
}
