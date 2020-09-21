//Machine's Minimum Lifetime

#include<stdio.h>
int main()
{
    int year=0, invest, alt;

    do
    {
        year+=1;

        // yearly produce income form alternate solution
        // 9 % of 1000 = 90
        alt = year * 90;

        // yearly produced income from machine
        // 1000 per year - [6000(machine cost) - 2000(salvage or scrap value of machine)]
        // 1000 * year - [6000-2000]
        invest = (1000*year) - 4000;
    }while(alt>invest);		//as if investment exceeds alternative, profit doesn't exceeds
    
    printf("Machine's Minimum Lifetime = %d years", year);
	return 0;
}

