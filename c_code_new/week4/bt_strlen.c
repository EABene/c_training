#include <stdio.h>

int bt_strlen(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return(i);
}

int main(void)
{
    char *x = "Hallo";

    printf("%d\n", bt_strlen(x));

    return (0);
}
