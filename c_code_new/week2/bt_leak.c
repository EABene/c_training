#include <stdlib.h>

int main(void)
{
    int *arr; // Platz gemacht für eine Adresse (Pointer)

    arr = malloc(sizeof(int) * 5);
    arr[0] = 85;

    // KEIN free - absichtlich
    free(arr); // oder doch, um es zu fixen...
    return (0);
}