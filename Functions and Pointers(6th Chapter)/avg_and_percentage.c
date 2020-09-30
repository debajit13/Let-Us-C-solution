// Program to find average and percentage of marks of 3 subjetcs of a student

#include<stdio.h>

int average(int, int, int);
float percentage(float, float, float);

int main() 
{
    int a, b, c, avg=0;
    float per=0;
    printf("Enter marks of subjects A, B and C: ");
    scanf("%d%d%d",&a,&b,&c);
    avg = average(a, b, c);
    per = percentage(a, b, c);
    printf("Average marks is: %d\n",avg);
    printf("Percentage: %.2f\n",per);

    return 0;
}

int average(int x, int y, int z)
{
    int avg = (x + y + z) / 3;
    return (avg);
}

float percentage(float x, float y, float z)
{
    float per = ((x + y + z) / 300) * 100;
    return (per);
}