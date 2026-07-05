#include <stdio.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    // --- 1. Einfache Datentypen (int, float, etc.) ---
    int zahl = 42;
    int *pZahl = &zahl; // Pointer auf einen Integer
    printf("Wert via Pointer: %d\n", *pZahl); // Zugriff durch Dereferenzierung


    // --- 2. Arrays (Pointer auf das erste Element) ---
    int zahlen[] = {10, 20, 30};
    int *pArray = zahlen; // Ein Array-Name IST bereits eine Adresse!
    printf("Erstes Element: %d\n", *pArray);
    printf("Zweites Element: %d\n", *(pArray + 1)); // Pointer-Arithmetik


    // --- 3. Structs (Der Pfeil-Operator) ---
    struct Punkt start = {10, 20};
    struct Punkt *pPunkt = &start;

    // Variante A: Umständlich
    printf("X-Wert: %d\n", (*pPunkt).x); 
    
    // Variante B: Der Profi-Weg mit dem Pfeil-Operator ->
    printf("Y-Wert: %d\n", pPunkt->y);


    // --- 4. Strings (char-Pointer) ---
    char *text = "Hallo UNIX"; // Zeigt auf das erste Zeichen 'H'
    printf("String: %s\n", text);

    return 0;
}
