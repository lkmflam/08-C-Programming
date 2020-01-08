#include <stdio.h>

int main(void)
{
	int userInput = 0;
	printf("Enter a character:  ");
	userInput = getchar();
	printf("Your character was:  ");
	putchar(userInput);
    printf("\n\n");
    printf("The size of the user input: %d", (int)sizeof(userInput));
	printf("\n\n");
	return 0;
}
