#include <stdio.h>

#define N 10
#define MAX 200  // taille maximale pour la phrase à rechercher

int main() {
    // Tableau de 10 phrases
    char *phrases[N] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[MAX];
    int trouve = 0;

    // Demander la phrase à rechercher
    printf("Entrez la phrase à rechercher :\n");
    fgets(recherche, MAX, stdin);

    // Retirer le '\n' final de fgets, si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Parcourir le tableau pour chercher la phrase
    for (int j = 0; j < N; j++) {
        int k = 0;
        int correspond = 1;
        while (phrases[j][k] != '\0' || recherche[k] != '\0') {
            if (phrases[j][k] != recherche[k]) {
                correspond = 0;
                break;
            }
            k++;
        }
        if (correspond) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
