#include <stdio.h>

int main(void)
{

    int grid[4][4];
    int row;
    int column;
    

    // Fill grid
    row = 0;
    while (row < 4)
    {
        column = 0;
        while (column < 4)
        {
            grid[row][column] = (1 + row) * (1 + column);
            column++;
        }
        row++;
    }


    //Print grid

    row = 0;
    while (row < 4)
    {
        column = 0;
        while (column < 4)
        {
            printf("%d ", grid[row][column]);
            column++;
        }
        printf("\n");
        row++;
    }


    return (0);
}