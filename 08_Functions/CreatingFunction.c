//
// Creating and using a programmer-defined function.
#include <stdio.h>
int square(int y); // function prototype
int main(void)
{
	// loop 10 times and calculate and output square of x each time
	for (int x = 1; x <= 10; ++x) {
		printf("%d  ", square(x)); // function call
	}	puts("");
}// square function definition returns the square of its parameter
int square(int y) // y is a copy of the argument to the function
{
	return y * y; // returns the square of y as an int
}
//
// Finding the maximum of three integers.
#include <stdio.h>
int maximum(int x, int y, int z); // function prototypeint 
int main(void)
{
   int number1; // first integer entered by the user
   int number2; // second integer entered by the user
   int number3; // third integer entered by the user   printf("%s", "Enter three integers: ");
   scanf("%d%d%d", &number1, &number2, &number3);   // number1, number2 and number3 are arguments
   // to the maximum function call
   printf("Maximum is: %d\n", maximum(number1, number2, number3));
}// Function maximum definition
// x, y and z are parameters
int maximum(int x, int y, int z)
{
   int max = x; // assume x is largest   if (y > max) { // if y is larger than max,
      max = y; // assign y to max
   }   
    if (z > max) { // if z is larger than max,
      max = z; // assign z to max
    }   return max; // max is largest value
}



