#include <stdio.h>

//int newfunc(main);
int main()
{
    static int count = 1;
    //count = count++;
    printf("%d\n", count++);
    if(count == 0)
    {
        return 0;
    }
main();
}
//Can call the main function within main, but it will run infinitely. 