#include <stdio.h>


void bt_double_array(int *arr, int length)
{
    int i;
    i = 0;

    while (i < length)
    {
        arr[i] = arr[i] * 2;
        i++;
    }

}



int main(void)
{
    int numbers[3] = {10, 20, 30};
    int i;

    bt_double_array(numbers, 3);

    i = 0;
    while (i < 3)
    {
        printf("%d\n", numbers[i]);
        i++;
    }
    return (0);
}