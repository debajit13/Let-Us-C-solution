<p align="center">
  <img style="border-width: 0" width="400" height="400" src="./assets/logo.png" alt="Let Us C Solutions logo">
</p>

# Let-Us-C-solution

Solution of all the exercise problems of Let Us C book( written by Yashwant Kanetkar )

# Motivation

Let Us C is one of the most popular book for learning C. It's also very important for coding interviews in the Campus Recruitments. So this project helps all the college undergraduates to prepare for their placement interview and get all solution codes of Let Us C in one place.

# Example Code

_Filename: calculate-gross-salary.c_

```
//program to calculate Ramesh's Gross Salary
#include<stdio.h>
int main()
{
	float bs,da,hra,gs;	//bs=basic salary, da=dearness allowance, hra=house rent allowance, gs=gross salary
	printf("_____Gorss Salary Calculator_____\n");
	printf("Enter the Basic Salary : ");
	scanf("%f",&bs);
	da = bs * 40 / 100;
	hra = bs * 20 / 100;
	gs = bs + hra + da;	//formula to calculate gross salary
	printf("Gorss Salary : %.3f",gs);
	return 0;
}

```

# How to use ?

- Just go to the chapter n.
- There you find solutions of that chapter's exercise and your question with proper description.

# How to contribute ?

To contribute in this project check out the [CONTRIBUTING.md](./CONTRIBUTING.md)

<p align="center">Made with :heart: and  :coffee: by Debajit Mallick</p>
