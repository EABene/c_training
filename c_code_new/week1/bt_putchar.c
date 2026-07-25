#include <unistd.h> // wie import

void bt_putchar(char c) // Funktionsdefinition, void = gibt nichts zurück
{                       // char c = Parameter c ist vom Typ char
    write(1, &c, 1);    // 1 = schreibe auf den Bildschirm, &c = Speicherort von c
}                       // 1 = Anzahl Zeichen


int main(void)
{
    bt_putchar('9');
    bt_putchar('2');
    bt_putchar('\n');
    return(0);
}
