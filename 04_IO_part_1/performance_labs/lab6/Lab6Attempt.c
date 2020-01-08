#include <stdio.h>

int main(void)
{
	int userInput = 0;
	printf("Enter a character:  ");
	userInput = getc(stdin);
	printf("Your character was:  ");
    putc(userInput -1, stdout);
    printf("\n\n");
	return 0;
}