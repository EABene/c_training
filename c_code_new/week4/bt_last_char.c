#include <stdio.h>

char bt_last_char(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    return (str[i - 1]);
}

int main(void)
{
    char *x = "Good day";

    printf("Last char: %c\n", bt_last_char(x));

    return (0);
}
