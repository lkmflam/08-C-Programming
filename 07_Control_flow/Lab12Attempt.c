# include <stdio.h>
# include <string.h>
int main(void)
{
    int user_input[20] = {0};
    printf("Please enter the number that you wish to store: \n");
    fgets(user_input, sizeof(user_input), stdin);
    //This is the creation of the buffer so there are no memory leaks ^^^
    //printf("The user has entered '%d'\n", user_input);
    user_input[strlen(user_input) -1] = '\0';
    //printf("The user has entered '%d'\n", user_input);
    signed int a = user_input[0];
    if (a > 0)
    {
        printf("The number is positive: '%d'\n", a);
    }
    else
    {
        printf("The number is negative: '%d'\n", a);
    }

}