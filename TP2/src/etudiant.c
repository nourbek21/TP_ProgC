#include <stdio.h>

int main() {
    // Tableaux pour 5 étudiant.e.s
    char noms[5][30] = {
        "Dupont",
        "Martin",
        "Durand",
        "Lambert",
        "Bernard"
    };

    char prenoms[5][30] = {
        "Alice",
        "Jean",
        "Sophie",
        "Lucas",
        "Marie"
    };

    char adresses[5][50] = {
        "12 Rue des Fleurs",
        "25 Avenue de France",
        "7 Boulevard Victor Hugo",
        "14 Rue du Lac",
        "3 Allée des Roses"
    };

    float noteC[5] = {14.5, 12.0, 16.0, 10.5, 18.0};
    float noteSE[5] = {15.0, 11.5, 17.0, 9.0, 19.0};

    // Affichage des informations
    int i;
    for (i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("  Nom        : %s\n", noms[i]);
        printf("  Prénom     : %s\n", prenoms[i]);
        printf("  Adresse    : %s\n", adresses[i]);
        printf("  Note en C  : %.2f\n", noteC[i]);
        printf("  Note en SE : %.2f\n\n", noteSE[i]);
    }

    return 0;
}
