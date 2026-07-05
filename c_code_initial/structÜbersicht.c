#include <stdio.h>

// --- TEIL 1: METHODEN DER DEFINITION (BAUPLAN) ---

// 1. Die klassische Methode
struct Person {
    char *name;
    int alter;
};

// 2. Definition mit typedef (spart das Wort 'struct' beim Erstellen)
typedef struct {
    char *marke;
    int baujahr;
} Auto;

// 3. Definition und gleichzeitige Instanziierung (Global Scope)
struct {
    char *status;
} systemStatus = {"Aktiv"};


int main() {
    // --- TEIL 2: METHODEN DER INITIALISIERUNG (ERSTELLEN) ---

    // A. Klassisch (Reihenfolge muss exakt stimmen)
    struct Person p1 = {"Alice", 30};

    // B. Designated Initializers (C99-Standard, sehr lesbar & sicher)
    // Die Reihenfolge ist hier egal!
    struct Person p2 = {
        .alter = 25,
        .name = "Bob"
    };

    // C. Schrittweise Initialisierung (nach der Deklaration)
    Auto meinWagen;
    meinWagen.marke = "Tesla";
    meinWagen.baujahr = 2023;

    // D. Teilweise Initialisierung
    // Alles, was nicht genannt wird, wird automatisch zu 0 oder NULL.
    struct Person p3 = {.name = "Charlie"}; 

    // E. Compound Literals (Direktes Zuweisen eines ganzen Structs)
    p1 = (struct Person){"Doris", 45};

    // --- AUSGABE ---
    printf("Person 2: %s, %d Jahre\n", p2.name, p2.alter);
    printf("Auto: %s (%d)\n", meinWagen.marke, meinWagen.baujahr);

    return 0;
}
