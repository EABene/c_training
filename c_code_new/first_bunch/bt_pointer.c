#include <stdio.h>

int main(void)
{
    int number;
    int *p;

    number = 41;
    p = &number;

    printf("Wert von number:    %d\n", number);     //d = Platzhalter für Zahl
    printf("Adresse von number: %p\n", &number);    //p = Platzhalter für Adresse
    printf("Inhalt von p:       %p\n", p);
    printf("Wert an Adresse p:  %d\n", *p);

    *p = 99;
    printf("number ist jetzt:   %d\n", number);

    *p = number + 1;
    printf("number ist jetzt:   %d\n", number);

    return(0);
}