#include <stdio.h>
#include <stdlib.h>

int *bt_make_array(int n)
{
    int *arr;
    int i;

    //Speicher für n ints anfordern
    arr = malloc(sizeof(int) * n);

    // füllen
    i = 0;
    while (i < n)
    {
        arr[i] = i * 10;
        i++;
    }

    // return the Pointer
    return (arr);
}

int main(void)
{
    int *arr;
    int i;
    int inserts;

    inserts = 8;

    arr = bt_make_array(inserts); // make array starting with 0 and increments of 10

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