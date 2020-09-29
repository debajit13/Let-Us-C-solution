// Program to calculate the area of a triangle

#include<stdio.h>
#include<math.h>

int area_of_triangle(int,int,int);

int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Area of the triangle: %d\n",area_of_triangle(a,b,c));
    return 0;
}

int area_of_triangle(int a, int b, int c)
{
    int s, area;
    s = (a+b+c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return (area);
}