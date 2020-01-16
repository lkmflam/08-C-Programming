#include <stdio.h>

unsigned int mystery(unsigned int a, unsigned int b); // function prototype

int main(void)
{
    printf("%s", "Enter two positive integers: ");
    unsigned int x; // first integer
    unsigned int y; //second integer
    scanf("%u%u", &x, &y);

    printf("The result is %u\n", mystery(x, y));
}
//Parameter b must be a positive integer 
// to prevent infinite recursion
unsigned int mystery(unsigned int a, unsigned int b)
{
    //base case
    if (1 == b) {
        return a;
    }
    else { //recursive step
        return a + mystery(a, b - 1);
    }
}
//The program takes two poitive integers and returns the product. If the second number is a one,
// it returns the first (n * 1 = n). If the second number isn't one, the function
//returns the first value and one less than the second value plus the first.