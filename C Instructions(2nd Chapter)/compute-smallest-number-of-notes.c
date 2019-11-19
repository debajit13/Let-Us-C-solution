//program to compute the smallest number of notes that will combine to give Rs.N
#include<stdio.h>
int main()
{
	int N;	//N=amount of money 
	int Rs1,Rs2,Rs5,Rs10,Rs50,Rs100;	//number of notes of Rs.1,Rs.2,Rs.10,Rs.50 and Rs.100
	printf("____Compute Number of notes needed to give Rs.N_____\n");
	printf("Enter the amount of money : ");
	scanf("%d",&N);
	Rs100 = N / 100;	//calculate number of Rs.100 notes
	N = N % 100;
	Rs50 = N / 50;		//calculate number of Rs.50 notes
	N = N % 50;
	Rs10 = N / 10;		//calculate number of Rs.10 notes
	N = N % 10;
	Rs5 = N / 5;		//calculate number of Rs.5 notes
	N = N % 5;
	Rs2 = N / 2;		//calculate number of Rs.2 notes
	Rs1 = N % 2;		//calculate number of Rs.1 notes
	printf("_____Number of notes_____\n");
	printf("Rs.100 : %d\n",Rs100);
	printf("Rs.50 : %d\n",Rs50);
	printf("Rs.10 : %d\n",Rs10);
	printf("Rs.5 : %d\n",Rs5);
	printf("Rs.2 : %d\n",Rs2);
	printf("Rs.1 : %d",Rs1);
	return 0;
}
