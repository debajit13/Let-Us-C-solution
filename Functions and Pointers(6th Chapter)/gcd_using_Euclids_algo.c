// Program to print the greatest common divisor using Euclid's algorithm

#include<stdio.h>

int gcd(int, int);

int main()
{
    int j, k;
    printf("Enter two no.s : ");
    scanf("%d%d",&j,&k);
    printf("Greatest common divisor is: %d",gcd(j,k));
    return 0;
}

int gcd(int a, int b)
{
    int r, res;
    while(res!=0)
    {
        r = a/b;
        res = a - (r*b);
        a = b;
        b = res;
    }
    return (a);
}