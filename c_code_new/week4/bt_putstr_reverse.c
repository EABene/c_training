#include <stdio.h>

void bt_putstr_reverse(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    while (i >= 0)
    {
        printf("%c", str[i]);
        i = i - 1;
    }
    printf("\n");
}


int main(void)
{
    char *x = "Hello sir, how are you?";

    bt_putstr_reverse(x);

    return (0);
}
