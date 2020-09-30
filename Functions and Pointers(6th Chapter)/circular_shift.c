// Program to circularly shift values of x, y and z

#include<stdio.h>

void circular_shift(int,int,int);

int main()
{
    int x, y, z;
    printf("Enter values of x, y and z: ");
    scanf("%d%d%d",&x,&y,&z);
    circular_shift(x,y,z);
    return 0;
}

void circular_shift(int a, int b, int c)
{
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("x=%d, y=%d, z=%d\n",a,b,c);
}