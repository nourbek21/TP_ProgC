#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

// Définition de la structure pour une couleur RGBA
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

// Structure pour stocker les couleurs distinctes et leur compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs (retourne 1 si égales, 0 sinon)
int comparer_couleurs(Couleur c1, Couleur c2) {
    return (c1.R == c2.R && c1.G == c2.G && c1.B == c2.B && c1.A == c2.A);
}

int main() {
    Couleur tableau[N];
    CouleurDistincte distinctes[N]; // Au pire, toutes les couleurs sont distinctes
    int nb_distinctes = 0;

    srand(time(NULL));

    // Remplissage du tableau de 100 couleurs aléatoires
    for (int i = 0; i < N; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < N; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (comparer_couleurs(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leur nombre d'occurrences
    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.R,
               distinctes[i].couleur.G,
               distinctes[i].couleur.B,
               distinctes[i].couleur.A,
               distinctes[i].compteur);
    }

    return 0;
}
