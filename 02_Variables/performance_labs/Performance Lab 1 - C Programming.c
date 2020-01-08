/* 
Murray
6 January 2020
Performance Lab 1
*/

#include <stdio.h>

int main(void)
{
	int years = 10;
	float loanAmount = 21000;
	double interestRate = 3.987654321;
	char lendingCode = 'C';

	printf("Your integer is %d \n", years);
	printf("Your integer is %d \n", sizeof(years));

	printf("Your float is %f \n", loanAmount);
	printf("Your float is %f \n", sizeof(loanAmount));

	printf("Your double is %lf \n", interestRate);
	printf("Your double is %lf \n", sizeof	(interestRate));

	printf("Your first is %c \n", lendingCode);
	printf("Your first is %c \n", sizeof(lendingCode));
	
	return 0;
}