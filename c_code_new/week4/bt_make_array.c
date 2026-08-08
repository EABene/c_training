#include <stdio.h>
#include <stdlib.h>

int *bt_make_array(int x)
{
    int *arr;
    int i;

    arr = malloc(sizeof(int) * x);

    i = 0;
    while (i < x)
    {
        arr[i] = (1 +  i) * 10;
        i++;
    }

    return (arr);
}


int main(void)
{
    int *arr;       // array
    int i;        // counter
    int inserts;  // inserts

    inserts = 6;
    arr = bt_make_array(inserts);
    i = 0;
    while (i < inserts)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    free(arr);

    return (0);
}
