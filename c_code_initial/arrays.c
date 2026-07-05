#include <stdio.h>




int main() {

const char* countries_europe[5] = {
    "Austria",
    "Germany",
    "Hungary",
    "Czechia",
    "Slovakia"};

// Loop through each index from 0 to 4
    for (int i = 0; i < 5; i++) {
        printf("%d: %s\n", i + 1, countries_europe[i]);
    }

}
