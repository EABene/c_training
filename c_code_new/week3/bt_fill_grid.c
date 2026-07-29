#include <stdio.h>

int main(void)
{
    int gitter[3][3];
    int zeile;
    int spalte;

    // FÜLLEN
    zeile = 0;
    while (zeile < 3)
    {
        spalte = 0;
        while (spalte < 3)
        {
            gitter[zeile][spalte] = zeile * spalte;
            spalte++;
        }
        zeile++;
    }

    // AUSGEBEN
    zeile = 0;
    while (zeile < 3)
    {
        spalte = 0;
        while (spalte < 3)
        {
            printf("%d ", gitter[zeile][spalte]);
            spalte++;
        }
        printf("\n");
        zeile++;
    }
    return (0);
}