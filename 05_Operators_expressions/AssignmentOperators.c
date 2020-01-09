int main(void)
{
    int x = 9;
    int y = 3;
    printf("Let me show you a few Assignment Operator examples below:\n");
    printf("x *- y: %d\n\n", x *- y);
    printf("X /= Y: %d\n\n", x /= y);
    printf("X %= Y: %d\n\n", x %= y);
    printf("X += Y: %d\n\n", x += y);
    printf("X -= Y: %d\n\n", x -= y);
    printf("X *= ++Y: %d\n\n", x *= ++y);
    printf("X && X: %d\n\n", x /= y--);
    printf("X %= --X: %d\n\n", x %= --x);
    printf("X += Y++: %d\n\n", x += y++);
    printf("X -= Y++: %d\n\n", x -= y++);
    printf("(y %= y) || (x /= x--): %d\n", (y %= y) || (x /= x--));
}