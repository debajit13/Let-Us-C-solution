// Program to find sum, average and standard deviation 5 numbers

#include<stdio.h>
#include<math.h>

int sum(int, int, int, int, int);
int average(int, int, int, int, int);
int standard_deviation(int, int, int, int, int);

int main()
{
    int a, b, c, d, e, s=0, avg=0, sd=0;
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s = sum(a, b, c, d, e);
    avg = average(a, b, c, d, e);
    sd = standard_deviation(a, b, c, d, e);

    printf("\nSum of all the numbers is: %d",s);
    printf("\nAverage of all the numbers is: %d",avg);
    printf("\nStandard Deviation of all the number is: %d",sd);

    return 0;
}

int sum(int a, int b, int c, int d, int e)
{
    int s = a + b + c + d + e;
    return (s);
}

int average(int a, int b, int c, int d, int e)
{
    int avg = (a + b + c + d + e) / 5;
    return (avg);
}

int standard_deviation(int a, int b, int c, int d, int e)
{
    int mean = (a + b + c + d + e) / 5;
    int x1, x2, x3, x4, x5, total_mean=0, sd=0;
    x1 = pow((a - mean), 2);
    x2 = pow((b - mean), 2);
    x3 = pow((c - mean), 2);
    x4 = pow((d - mean), 2);
    x5 = pow((e - mean), 2);

    total_mean = (x1 + x2 + x3 + x4 + x5) / 5;
    sd = sqrt(total_mean);
    return (sd);
}