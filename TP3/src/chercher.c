#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];
    int i, entier;
    int trouve = 0;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs entre -1000 et 1000
    for (i = 0; i < N; i++) {
        tab[i] = (rand() % 2001) - 1000; // -1000 à 1000
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande de l'entier à rechercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier);

    // Recherche dans le tableau
    for (i = 0; i < N; i++) {
        if (tab[i] == entier) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
