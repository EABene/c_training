#include <stdio.h>

char bt_last_char(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return(str[i - 1]);

}


int main(void)
{
    char *text = "Hallo";

    printf("Last character: %c\n", bt_last_char(text)); // should print 'o'
    return (0);
}
