#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];
    int i, j, temp;

    srand(time(NULL));

    // ---------------------------
    // Remplissage du tableau
    // ---------------------------
    for (i = 0; i < N; i++) {
        tab[i] = (rand() % 2001) - 1000; // valeurs aléatoires entre -1000 et +1000
    }

    // ---------------------------
    // Affichage du tableau non trié
    // ---------------------------
    printf("Tableau non trié :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // ---------------------------
    // Tri à bulles (bubble sort)
    // ---------------------------
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // ---------------------------
    // Affichage du tableau trié
    // ---------------------------
    printf("Tableau trié par ordre croissant :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
