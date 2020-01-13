# include <stdio.h>
# include <string.h>
int main(void)
{
    char user_input[20] = {0};
    printf("Please enter the string that you wish to store: \n");
    fgets(user_input, sizeof(user_input), stdin);
    user_input[strlen(user_input) -1] = '\0';
    if (user_input[0] >= 32);
    {
        printf("The user has entered '%s'\n", user_input);
    }
    if (user_input[0] <= 126)
    {
        printf("The user has entered '%s'\n", user_input);
    }
}