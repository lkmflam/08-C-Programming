#include <stdio.h>

int main(void)
{
    int x = 2;
    int y = 6;
    // Will print a new line and a digit, 0 meaning False and 1 meaning True
    // Prints 0 or 1 after comparing. Won't display the comparison itself (but could)
    printf("\n%d\n", x<=y);
    printf("%d\n", y > x);
    printf("%d\n", y >= x);
    printf("%d\n", y == x);
    printf("%d\n", y != x);
    printf("%d\n", 2 == y);
    printf("%d\n", 6 != x);
    printf("%d\n", 6 >= 2);
    printf("%d\n", 2 < 6);
    printf("%d\n", x != y != 3 >= x);
}