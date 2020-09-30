// Program to evaluate series of sin(x) to five significant digits

#include<stdio.h>
#include<math.h>

void sin_calc(int);
long int factorial(int);

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    sin_calc(x);
    return 0;
}

void sin_calc(int n)
{
    int i, diff=0, sum=n, total=0;
    for(i=3; i<=9; i+=4)
    {
        diff += (pow(n,i))/factorial(i);
    }
    for(i=5; i<=9; i+=4)
    {
        sum += (pow(n,i))/factorial(i);
    }
    printf("Sum: %d\nDiff: %d\n",sum,diff);

    total = sum - diff;
    printf("sin(%d) = %d\n",n,total);
}

long int factorial(int n)
{
    if (n==0)
        return (1);
    else
        return(n*factorial(n-1));
}