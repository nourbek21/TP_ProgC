#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];
    int i;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs entre 1 et 1000
    for (i = 0; i < N; i++) {
        tab[i] = (rand() % 1000) + 1;  // valeurs 1 → 1000
    }

    // Trouver le plus petit et le plus grand
    int min = tab[0];
    int max = tab[0];

    for (i = 1; i < N; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    // Affichage du résultat
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
