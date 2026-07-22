#include <stdio.h> // 100% self coded


int bt_strlen(char *x)
{
    int i;
    i = 0;

    while(x[i] != '\0')
    {
        i++;
    }

    return (i);
}

int main(void)
{
    char *x = "Hallo";


    printf("Length of given string: %d\n", bt_strlen(x));
    return (0);
}