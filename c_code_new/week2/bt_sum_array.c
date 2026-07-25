#include <stdio.h>

int bt_sum_array(int *arr, int length)
{
    int i;
    int sum;
    i = 0;
    sum = 0;

    while (i < length)  // careful, C geht bei Arrays 4 bytes weiter, statt 1 byte
    {                   // C springt in Elementen, nicht in bytes
        sum = sum + arr[i];
        i++; 
    }

    return (sum);
}


int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Sum of array: %d\n", bt_sum_array(numbers, 5));
    return (0);
}