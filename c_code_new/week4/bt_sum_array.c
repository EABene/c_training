#include <stdio.h>


int bt_sum_array(int *arr)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < sizeof(arr))
    {
        j = j + arr[i];
        i++;
    }  
    return (j);
}



int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};
    int y;

    y = bt_sum_array(x);
    printf("Sum of array:  %d\n", y);

    return (0);
}


