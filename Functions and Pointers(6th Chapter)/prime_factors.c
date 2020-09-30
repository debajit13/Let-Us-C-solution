// Program to find the prime factors of a number using recursion

#include<stdio.h>

void prime_fact(int);

int main()
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);

    printf("Prime factors of %d is: ",n);
    prime_fact(n);

    return 0;
}

void prime_fact(int x)
{
    int count=2;
    if(x==1)
        return;
    while(x % count != 0)
        count++;
    printf("%d ",count);
    prime_fact(x/count);
}