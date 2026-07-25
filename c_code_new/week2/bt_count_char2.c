#include <stdio.h>

int bt_countchar2(char *x, char y)
{
    int i;
    int j;
    i = 0;
    j = 0;

    while (x[i] != '\0')
    {
        if (x[i] == y)
        {
            j++;
        }


        i++;
    }

    return (j);
}


int main(void)
{
    char *text = "Good day";
    char sign = 'o';

    printf("Count of sign in given string: %d\n", bt_countchar2(text, sign));
    return (0);
}