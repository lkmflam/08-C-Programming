#include <stdio.h>

int main(void)
{
    char my_array[256] = {0};
    // My chosen phrase is "Pink flamingo tower fools"
    my_array [0] = "Pink";
    my_array [1] = "flamingo";
    my_array [2] = "tower";
    my_array [3] = "fools";
    my_array [4] = 0;

    printf("My phrase is: %s\n Only a FOOL would think anything could follow", my_array);
}