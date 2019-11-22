//program to find a year is leap year or not
#include<stdio.h>
main()
{
	int year;
		
    printf("Enter a year: ");	//taking year as input
    scanf("%d",&year);
    
    if(year%4 == 0)		//when year is divisable by 4 and not divisable by 100 then the year is leap year
    {
        if( year%100 == 0)	//when year is not leap year
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else	//when year is leap year
            printf("%d is a leap year.", year );
    }
    else	//when year is not leap year
        printf("%d is not a leap year.", year);
}
