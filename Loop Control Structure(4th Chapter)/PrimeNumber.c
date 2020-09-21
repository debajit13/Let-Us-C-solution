//Calculate Prime number between 1 & 300

#include<stdio.h>
int main()
{
	int num,i,count;
	printf("The prime numbers between 1 & 300 are:\n");
	for(num=2;num<=300;num++)
	{
		count=0;
		for(i=2;i<num/2;i++)
		{
			if(num%i==0)
			{
				count++;
				break;
			}
		}
	    if(count == 0 && num != 1 )
	    {
			printf("%d ", num);
	    }  
	}
	return 0;
}
