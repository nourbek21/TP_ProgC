#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

// Fonction pour remplir un tableau avec des valeurs aléatoires croissantes
void remplir_tableau_trie(int tab[], int taille) {
    int i;
    srand(time(NULL));
    tab[0] = rand() % 10; // valeur initiale
    for (i = 1; i < taille; i++) {
        tab[i] = tab[i-1] + rand() % 10 + 1; // valeur croissante
    }
}

// Fonction de recherche dichotomique
int recherche_dichotomique(int tab[], int taille, int cible) {
    int gauche = 0;
    int droite = taille - 1;
    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;
        if (tab[milieu] == cible) {
            return 1; // trouvé
        } else if (tab[milieu] < cible) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }
    return 0; // non trouvé
}

int main() {
    int tab[N];
    int i, entier;

    // Remplissage du tableau avec des valeurs triées
    remplir_tableau_trie(tab, N);

    // Affichage du tableau
    printf("Tableau trié :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande de l'entier à rechercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier);

    // Recherche dichotomique
    if (recherche_dichotomique(tab, N, entier)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
