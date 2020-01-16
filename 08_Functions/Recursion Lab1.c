#include <stdio.h>

int gcd(int x, int y); // function prototype

int main(void)
{
    printf("%s", "Enter two positive integers: ");
    int x; // first integer
    int y; //second integer
    scanf("%d%d", &x, &y);

    printf("The result is %d\n", gcd(x, y));
}
//Parameter y must be a positive integer 
// to prevent infinite recursion
int gcd(int x, int y)
{
    //base case
    if (0 == y) {
        return x;
    }
    else { //recursive step
        return gcd(y, x % y);
    }
}