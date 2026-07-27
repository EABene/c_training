#include <stdio.h>

int main(void)
{
    int gitter[3][4] = {    // basically an array of arrays
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    int zeile;
    int spalte;

    zeile = 0;
    while (zeile < 3)
    {
        spalte = 0;
        while (spalte < 4)
        {
            printf("%d ", gitter[zeile][spalte]);
            spalte++;
        }
        printf("\n");
        zeile++;
    }
    return (0);
}