#include <stdio.h>  // 100% self coded
                    // errors: printf: use %c, not %d; x[i - 1], not x[i] - 1


char bt_last_char(char *x)
{
    int i;
    i = 0;

    while (x[i] != '\0')
    {
        i++;
    }

    return (x[i - 1]);
}


int main(void)
{
    char *x = "Ahoy";


    printf("Last character: %c\n", bt_last_char(x));
    return (0);
}