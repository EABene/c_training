#include <stdio.h>


int bt_sum_array(int *arr, int length)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < length)
    {
        j = j + arr[i];
        i++;
    }
    return (j);
}



int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};
    int length = 5;
    int y;

    y = bt_sum_array(x, length);
    printf("Sum of array:  %d\n", y);

    return (0);
}

