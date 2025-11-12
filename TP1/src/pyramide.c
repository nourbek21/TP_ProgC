#include <stdio.h>

int main() {
    int n = 5; // hauteur de la pyramide
    int i, j;

    printf("=== Génération d'une pyramide de nombres ===\n\n");

    // Boucle principale : chaque ligne de la pyramide
    for (i = 1; i <= n; i++) {
        // 1. Espaces pour centrer la ligne
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // 2. Nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4. Nouvelle ligne
        printf("\n");
    }

    printf("\nPyramide générée avec succès !\n");

    return 0;
}

