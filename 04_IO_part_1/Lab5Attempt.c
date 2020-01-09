#include <stdio.h>

int main(void)
{
	int userInput = 0;
	printf("Enter a character:  ");
	userInput = getchar();
    userInput ++;
	printf("Your character was:  ");
	putchar(userInput);
    printf("\n\n");
	return 0;
}
