// program to convert a user entered number to binary

#include<stdio.h>

int dec_to_bin(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Binary equivalent of %d is: %d\n",num,dec_to_bin(num));

    return 0;
}

int dec_to_bin(int n)
{
    int r, s=0;
    while(n!=0)
    {
        r = n%2;
        s = (s*10) + r;
        n = n/2;
    }
    return (s);
}

