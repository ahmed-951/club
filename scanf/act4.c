#include <stdio.h>

int main() {
    int a, b;
    float quotient;

    // Demander les entrées à l'utilisateur
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    // Effectuer la division en utilisant des flottants
    quotient = (float)a / b;

    // Afficher le résultat avec une partie décimale
    printf("Le quotient de %d et %d est : %9f\n", a, b, quotient);

    return 0;
}
