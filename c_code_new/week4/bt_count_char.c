#include <stdio.h>

int bt_count_char(char *str, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {    
            j++;
        }
        i++;
    }
    return (j);
}


int main(void)
{
    char *x = "Hello good day sir";
    char y = 's';

    printf("Letter in String: %d times.\n", bt_count_char(x, y));

    return (0);
}
