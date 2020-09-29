// Finding running sum of first 25 natural numbers using recursion

#include<stdio.h>

int running_sum(int);

int main()
{
    int n = 25;
    printf("Sum of first %d natural numbers: %d",n,running_sum(n));
    return 0;
}

int running_sum(int num)
{
    int i, sum=0;
    if(num<=1)
        return num;
    else 
        return(num + running_sum(num-1));
}