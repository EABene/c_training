#include <stdio.h>  // 100% self coded
                    // errors: '\n' instead of '\0"
                    // second counter
                    // no pointer needed for single chars

int bt_count_char(char *x, char y)
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
    char *text = "Hallo";
    char zeichen = 'l';


    printf("L is in Hallo the following times: %d\n", bt_count_char(text, zeichen));

    return (0);
}