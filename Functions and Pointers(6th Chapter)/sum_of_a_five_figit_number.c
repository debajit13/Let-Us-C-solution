// Program to find sum of a 5-digit number using recursive and non-recursive function

#include<stdio.h>

int recursive_sum(int);
int non_recursive_sum(int);

int main()
{
    int x, sum1=0, sum2=0;
    printf("Enter a five digit number: ");
    scanf("%d",&x);
    sum1 = recursive_sum(x);
    sum2 = non_recursive_sum(x);
    printf("Sum of digits of %d in recursive way: %d\n",x,sum1);
    printf("Sum of digits of %d in non-recursive way: %d\n",x,sum2);
    return 0;
}

int recursive_sum(int a)
{
    if(a!=0)
        return (a%10 + recursive_sum(a/10));
    else 
        return 0;
}

int non_recursive_sum(int a)
{
    int r, sum=0;
    while(a!=0)
    {
        r = a % 10;
        sum += r;
        a = a / 10;
    }
    return (sum);
}