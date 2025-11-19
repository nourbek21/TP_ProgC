#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11   // Taille des tableaux

int main() {
    int tabInt[N];
    float tabFloat[N];

    // Pointeurs pour parcourir les tableaux
    int *pInt;
    float *pFloat;

    srand(time(NULL));  // Initialisation de la graine aléatoire

    // -------------------------------
    //  Remplissage des tableaux
    // -------------------------------
    pInt = tabInt;
    pFloat = tabFloat;

    for (int i = 0; i < N; i++) {
        *(pInt + i) = rand() % 200;                // entier aléatoire 0–199
        *(pFloat + i) = (rand() % 1000) / 100.0f;  // flottant aléatoire
    }

    // -------------------------------
    //  Affichage avant modification
    // -------------------------------
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n\n");

    printf("Tableau de flottants (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n\n");

    // -------------------------------
    //  Multiplication par 3 aux indices pairs
    // -------------------------------
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3.0f;
        }
    }

    // -------------------------------
    //  Affichage après modification
    // -------------------------------
    printf("Tableau d'entiers (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n\n");

    printf("Tableau de flottants (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    return 0;
}
