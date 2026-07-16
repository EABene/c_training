#include <stdio.h>

void double_value(int *n)
{
    *n = *n * 2;
}

int main(void)
{
    int x;

    x = 23;
    double_value(&x);
    printf("x = %d\n", x);
    return (0);
}