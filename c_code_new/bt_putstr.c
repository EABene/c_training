#include <unistd.h>

void bt_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    bt_putstr("Hallo C Code");
    write(1, "\n", 1);
    return(0);
}