#include <stdio.h>
#include <string.h>

// --- TEIL 1: METHODEN DER DEFINITION (BAUPLAN) ---

// 1. Die klassische Methode
union Daten {
    int i;
    float f;
    char str[20];
};

// 2. Definition mit typedef
typedef union {
    int id;
    char code;
} Identifier;

// --- TEIL 2: INITIALISIERUNG UND ERSTELLUNG ---

int main() {
    // A. Klassische Initialisierung
    // WICHTIG: Man kann nur das ERSTE Mitglied direkt initialisieren!
    union Daten d1 = {10}; 

    // B. Designated Initializers (C99 - Empfohlen!)
    // Hier kann man gezielt ein bestimmtes Mitglied wählen.
    union Daten d2 = {.f = 3.14f};

    // C. Schrittweise Zuweisung (Häufigster Weg)
    // Achtung: Jede neue Zuweisung überschreibt den vorherigen Wert!
    union Daten d3;
    
    d3.i = 42;
    printf("d3.i: %d\n", d3.i); // Funktioniert

    strcpy(d3.str, "C-Programm"); // Überschreibt d3.i!
    printf("d3.str: %s\n", d3.str); // Funktioniert
    // printf("%d", d3.i); // Das wäre jetzt "Müll" oder ein Teil des Strings!

    return 0;
}
