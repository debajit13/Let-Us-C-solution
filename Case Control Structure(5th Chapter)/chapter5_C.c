// Program to run the following functions:
// 1.Factorial of a number
// 2.Prime or not
// 3.Odd or even
// 4.Exit

#include<stdio.h>
#include<stdlib.h>

void factorial(int);
void prime_or_not(int);
void odd_or_even(int);

int main()
{
    int ch, n;
    while(1) {
        printf("1.Factorial of a number\n");
        printf("2.Prime or not\n");
        printf("3.Odd or even\n");
        printf("4.Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch) 
        {
            case 1:
                printf("Enter no.: ");
                scanf("%d",&n);
                factorial(n);
                break;

            case 2:
                printf("Enter no.: ");
                scanf("%d",&n);
                prime_or_not(n);
                break;

            case 3:
                printf("Enter no.: ");
                scanf("%d",&n);
                odd_or_even(n);
                break;

            case 4:
                exit(1);

            default:
                printf("Wrong choice!\n\n");
        }
    }
    
    return 0;
}

void factorial(int a)
{
    int i, p=1;
    for(i=a; i>=1; i--) {
        p = p * i;
    }
    printf("Factorial of %d is: %d\n\n",a,p);
}

void prime_or_not(int x)
{
    int i, p=0;
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
            p++;
    }
    if(p==2)
        printf("%d is a prime number\n\n",x);
    else
        printf("%d is not a prime number\n\n",x);
}

void odd_or_even(int n)
{
    if(n%2==0)
        printf("%d is even\n\n",n);
    else 
        printf("%d is odd\n\n",n);
}