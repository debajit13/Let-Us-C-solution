#include<stdio.h>

int main()
{
    int class, n, grace=0;
    printf("Enter class obtained(1, 2 or 3): ");
    scanf("%d",&class);
    printf("Enter no. of subjects failed in: ");
    scanf("%d",&n);

    switch(class)
    {
        case 1:
            if(n<=3)
                grace = 5*n;
            break;
        
        case 2:
            if(n<=2)
                grace = 4*n;
            break;
        
        case 3:
            if(n<=1)
                grace = 5;
            break;
    }

    printf("\nGrace marks: %d",grace);
    return 0;
}