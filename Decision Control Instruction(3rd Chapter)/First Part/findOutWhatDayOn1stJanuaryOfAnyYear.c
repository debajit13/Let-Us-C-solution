//program to find what is the day on 1st January of any year 
#include<stdio.h>
main()
{
	int ref_year = 2001,year,day,lyear,nmyear,diff,td;	//ref_year=reference year, year=input year, lyear=leap year, nmyear=normal year, diff=difference between ref_year & year, td=total days, day=day on 1st January
	
	printf("Enter the year : ");	//taking year as input
	scanf("%d",&year);
	
	diff = year - ref_year;		//calculate the difference between year and reference year
	
	lyear = diff % 4;	//number of leap years
	nmyear = diff - lyear;	//number of normal years
	
	td = (lyear * 366) + (nmyear * 365);	//total number of days
	day = td % 7;	//for checking the day on 1st January
	
	if(day == 0)	
		printf("The 1st January of year %d is Monday",year);
		
	else if(day == 1)
		printf("The 1st January of year %d is Tuesday",year);
		
	else if(day == 2)
		printf("The 1st January of year %d is Wednesday",year);
		
	else if(day == 3)
		printf("The 1st January of year %d is Thursday",year);
		
	else if(day == 4)
		printf("The 1st January of year %d is Friday",year);
		
	else if(day == 5)
		printf("The 1st January of year %d is Saturday",year);
		
	else if(day == 6)
		printf("The 1st January of year %d is Sunday",year);
}

