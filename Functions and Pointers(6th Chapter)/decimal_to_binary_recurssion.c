// program to convert a user entered number to binary using recursiom

#include<stdio.h>

int dec_to_bin_rec(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Binary equivalent of %d using recursion is: %d\n",num,dec_to_bin_rec(num));

    return 0;
}

int dec_to_bin_rec(int n) 
{ 
    if (n == 0)  
        return 0;  
    else
        return (n%2 + 10 *  dec_to_bin_rec(n / 2)); 
}