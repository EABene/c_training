#include <unistd.h>

void ft_putst(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // hier ein Zeichen ausgeben - mit write, so wie bei put_char
        i++;
    }
}

int main(void)
{
    ft_putstr("Hallo Test");
    write(1, "\n", 1);
    return(0);
}