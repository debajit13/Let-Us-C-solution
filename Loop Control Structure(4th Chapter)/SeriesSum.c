//Print Series Sum 1/1!+2/2!+... for 7 terms

#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int i;
    float n,summ=0;
    for(i=0,n=1;i<7,n<=7;n++,i++)
    {
    	summ=summ+(n/factorial(n));
	}
	printf("Series Sum of (1/1! + 2/2! +...) for 7 terms = %f",summ);
    return 0;
}
