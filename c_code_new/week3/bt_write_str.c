#include <unistd.h>

int bt_str_len(char *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }

    return (i);
}

void bt_write_str(char *str)
{
    int len;
    len = bt_str_len(str);

    write(1, str, len);
}



int main(void)
{
    bt_write_str("Hello everybody");
    write(1, "\n", 1);
    return (0);
}