#include <unistd.h> // wie import

void ft_putchar(char c) // Funktionsdefinition, void = gibt nichts zurück
{                       // char c = Parameter c ist vom Typ char
    write(1, &c, 1);    // 1 = schreibe auf den Bildschirm, &c = Speicherort von c
}                       // 1 = Anzahl Zeichen

int main(void)
{
    ft_putchar('4');
    ft_putchar('2');
    ft_putchar('\n');
    return(0);
}