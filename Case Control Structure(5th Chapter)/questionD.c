#include<stdio.h>  
  
int main()  
{  
    int grade, grace = 0, failed;  
  
    printf("Enter the class obtained by the student\n");  
    scanf("%d", &grade);  
  
    printf("How many subjects has the student failed\n");  
    scanf("%d", &failed);  
  
    switch(grade)  
    {  
        case 1:  
                if(failed > 3)  
                    grace = 0;  
                else  
                    grace = 5;  
  
                break;  
  
        case 2:  
                if(failed > 2)  
                    grace = 0;  
                else  
                    grace = 4;  
  
                break;  
  
        case 3:  
                if(failed > 1)  
                    grace = 0;  
                else  
                    grace = 5;  
  
                break;  
  
         default: printf("You entered wrong class for the student\n");  
  
    }  
  
    if(grade == 1 || grade == 2 || grade == 3)  
    {  
        printf("The student has obtained a grace marks of %d per subject\n",   
              grace);  
    }  
  
    return 0;  
}  