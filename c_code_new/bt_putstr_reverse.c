#include <stdio.h>

void bt_putstr_reverse(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')      // herausfinden, wie lang der String ist
    {
        i++;
    }
    i--;
    while (i >= 0)              // loop runs BACKWARDS
    {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");

}



int main(void)
{
    char *x = "Hello";

    printf("String in reverse:\n");
    bt_putstr_reverse(x);
    return (0);
}