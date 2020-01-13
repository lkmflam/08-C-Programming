# include <stdio.h>
# include <string.h>
int main(void)
{
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int c = 0;
    int d = 0;
    printf("Please enter a number: \n");
    scanf("%d", a);
    printf("Please enter a second number: \n");
    scanf("%d", b);
    {
        if (a == b)
        {
            printf("ERROR");
        }
        else if (a > b)
        {
            c = a;
        }
        else if (b > a)
        {
            c = b;
        }
        else 
        {
            printf("I don't know what you want from me. Nothing happened.");
        }
        
    }
    d = a + b + c;


}