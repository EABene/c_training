#include <stdio.h>
#include <stdlib.h>     // malloc und free sind hier

int main(void)
{
    int *arr;
    int i;

    arr = malloc(sizeof(int) * 5);  // 1. Speicher anfordern

    i = 0;                          // 2. Speicher befüllen
    while (i < 5)
    {
        arr[i] = i * 10;            // 0, 10, 20, 30, 40
        i++;
    }

    i = 0;
    while (i < 5)
    {
        printf("%d\n", arr[i]);     // 3. Speicher benutzen (ausgeben)
        i++;
    }

    free(arr);                      // 4. freigeben - NICHT vergessen
    return (0);
}