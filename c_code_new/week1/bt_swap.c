#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;                           // *a = "der WERT an der Adresse a"  -> Wert holen
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x;
    int y;

    x = 1;
    y = 2;
    swap(&x, &y);                       // &x = "die ADRESSE von x"
    printf("x = %d, y = %d\n", x, y);
    return (0);
}