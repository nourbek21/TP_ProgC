#include <stdio.h>

int main() {
    int a = 2;  // base
    int b = 3;  // exposant
    int resultat = 1; // stocke le résultat
    int i;

    printf("=== Calcul de la puissance ===\n");
    printf("a = %d, b = %d\n", a, b);

    // Boucle pour calculer a^b sans pow()
    for (i = 1; i <= b; i++) {
        resultat *= a;
    }

    printf("Résultat : %d^%d = %d\n", a, b, resultat);

    return 0;
}
