# include <stdio.h>
# include <math.h>
int main(void)
{
    int x = 0;
    int y = 1;
    int d = 1;
    int v = 0;
    printf("Enter a number less than 1000: \n");
    scanf("4%d", &x);
    if (x > 999)
    {
        printf("Nice try, no numbers greater than 1000");
        return 0;
    }
    while (y <= 20)
    {
        if (d < 10)
        {
            v = x % d;
            printf("%d %% %d = %d\n", x, d, v);
        }
        y++;
        d++;

    }
}