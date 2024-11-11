#include <stdio.h>

int main() {
    // Plage de nombres (exemple : de 0 à 56)
    int start = 0;
    int end = 56;

    // Affichage des valeurs entre start et end, avec des lettres de l'alphabet
    for (int i = start; i <= end; i++) {
        // Utilisation de l'opérateur modulo pour répéter l'alphabet
        char letter = 'a' + (i % 26); // 26 lettres dans l'alphabet
        printf("Index %d: %c\n", i, letter);
    }

    return 0;
}
