#include <stdio.h>

int main(void)
{
    char my_array[256] = {0};
    // My chosen phrase is "Pink"
    my_array [0] = 80;
    my_array [1] = 105;
    my_array [2] = 110;
    my_array [3] = 107;
    my_array [4] = 0;

    printf("My phrase is: %s\n If recieved correctly, the word will tell you the color of a pig.", my_array);
}