// Program to find the first 25 numbers of a Fiboncci series using recursion

#include<stdio.h>

int fibonacci(int);

int main()
{
    int i, num=25, m=1;
    printf("Fibonacci series terms are: \n");
    for(i=1; i<=num; i++)
    {
        printf("%d ", fibonacci(m)); 
        m++;
    }
    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}