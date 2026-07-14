#include <stdio.h>

void swap(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
    printf("In func: a = %d, b = %d\n", a, b);
}

int main(void)
{
    int x;
    int y;

    x = 1;
    y = 2;
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);
    return (0);
}