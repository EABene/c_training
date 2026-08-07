#include <stdio.h>

int bt_sum_array(int *arr, int length)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < length)
    {
    sum = sum + arr[i];
    i++;
    }
    return (sum);
}


int main(void)
{
    int length;

    length = 5;
    int x[5] = {6, 34, 76, 10, 80};
 
    printf("%d\n", bt_sum_array(x, length));
    return (0);
}
