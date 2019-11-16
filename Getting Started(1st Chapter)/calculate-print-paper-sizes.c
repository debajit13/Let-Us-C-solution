//program to calculate and print paper size of A0, A1, A2, ... A8
#include<stdio.h>
int main()
{
	float a0_length = 1189, a0_breath = 841;	//dimension of paper a0
	float a1_length = a0_breath ,a1_breath = a0_length / 2;	//dimension of paper a1
	float a2_length = a1_breath ,a2_breath = a1_length / 2;	//dimension of paper a2
	float a3_length = a2_breath,a3_breath = a2_length / 2;	//dimension of paper a3
	float a4_length = a3_breath,a4_breath = a3_length / 2;	//dimension of paper a4
	float a5_length = a4_breath,a5_breath = a4_length / 2;	//dimension of paper a5
	float a6_length = a5_breath,a6_breath = a5_length / 2;	//dimension of paper a6
	float a7_length = a6_breath,a7_breath = a6_length / 2;	//dimension of paper a7
	float a8_length = a7_breath,a8_breath = a7_length / 2;	//dimension of paper a8	
	printf("_____Dimensions of Different size of Papers_____\n\n");
	printf("Dimension of paper A0 : %.2f mm X %.2f mm\n",a0_length,a0_breath);
	printf("Dimension of paper A1 : %.2f mm X %.2f mm\n",a1_length,a1_breath);
	printf("Dimension of paper A2 : %.2f mm X %.2f mm\n",a2_length,a2_breath);
	printf("Dimension of paper A3 : %.2f mm X %.2f mm\n",a3_length,a3_breath);
	printf("Dimension of paper A4 : %.2f mm X %.2f mm\n",a4_length,a4_breath);
	printf("Dimension of paper A5 : %.2f mm X %.2f mm\n",a5_length,a5_breath);
	printf("Dimension of paper A6 : %.2f mm X %.2f mm\n",a6_length,a6_breath);
	printf("Dimension of paper A7 : %.2f mm X %.2f mm\n",a7_length,a7_breath);
	printf("Dimension of paper A8 : %.2f mm X %.2f mm\n",a8_length,a8_breath);
	return 0;
}
