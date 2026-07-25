#include <stdio.h>


int bt_strlen(char *str)  //*str = das Zeichen, auf das str zeigt
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;        //Hier passiert das weiterrücken
    }
    return (i);

}


int main(void)
{
    char *text = "Hallo";                           // leg "Hallo" irgendwo in den Speicher, und lass text auf den Anfang zeigen.   

    printf("Length: %d\n", bt_strlen(text));        // text speichert die Adresse des ersten Zeichens

    printf("erstes Zeichen so:  %c\n", text[0]); // those two do exactly the same. text[0] == *text, point to first char of string
    printf("erstes Zeichen so:  %c\n", *text);

    return (0);
}