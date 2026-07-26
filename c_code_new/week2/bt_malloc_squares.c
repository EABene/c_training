#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int i;
    int n;

    n = 6;
    arr = malloc(sizeof(int) * n);

    // create array with squared numbers
    i = 0;
    while (i < n)
    {
        arr[i] = i * i;
        i++;
    }

    // print array
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    // free
    free(arr);

    return (0);
}