#include <stdio.h>
#include <stdlib.h> // Unverzichtbar für malloc und free

int main() {
    int anzahl;
    int *dynamicArray;

    printf("Wie viele Zahlen möchtest du speichern? ");
    scanf("%d", &anzahl);

    // 1. Speicher reservieren (Allocation)
    // Wir sagen: "Gib mir Platz für 'anzahl' mal die Größe eines Integers"
    dynamicArray = (int *)malloc(anzahl * sizeof(int));

    // 2. Sicherheitscheck
    // Falls das System keinen Speicher mehr hat, gibt malloc NULL zurück
    if (dynamicArray == NULL) {
        printf("Speicher konnte nicht reserviert werden!\n");
        return 1;
    }

    // 3. Den Speicher wie ein normales Array benutzen
    for (int i = 0; i < anzahl; i++) {
        dynamicArray[i] = i * 10;
        printf("Index %d: %d\n", i, dynamicArray[i]);
    }

    // 4. Den Speicher wieder freigeben (WICHTIG!)
    // In UNIX/C ist das Aufräumen deine Aufgabe.
    free(dynamicArray);
    
    // Kleiner Profi-Tipp: Pointer nach free auf NULL setzen
    dynamicArray = NULL; 

    return 0;
}
