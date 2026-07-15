#include <stdio.h>

void add_ten(int *n)
{
    *n = *n + 10;
}

int main(void)
{
    int x;
    x = 67;

    add_ten(&x);
    printf("Added Ten to x: %d\n", x);
    return (0);
}