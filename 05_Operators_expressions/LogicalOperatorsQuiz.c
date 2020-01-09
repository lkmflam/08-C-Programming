#include <stdio.h>

int main(void)
{
    int x = 99;
    int y = 0;
    printf("Let me show you a few Logical Operator examples below:\n");
    printf("X && Y: %d\n\n", x && y);
    printf("X || Y: %d\n\n", x || y);
    printf("!Y: %d\n\n", !y);
    printf("Y && 0: %d\n\n", y && 0);
    printf("X || 42: %d\n\n", x || 42);
    printf("!X: %d\n\n", !x);
    printf("X && X: %d\n\n", x && x);
    printf("Y || Y: %d\n\n", y || y);
    printf("!1: %d\n\n", !1);
    printf("1 && 1: %d\n\n", 1 && 1);
    printf("(0 && 1) || (2 && 3): %d\n", (0 && 1) || (2 && 3));
}