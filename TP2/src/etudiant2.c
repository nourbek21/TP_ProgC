#include <stdio.h>
#include <string.h>   // Pour strcpy

// Définition de la structure étudiant.e
struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;   // Note en Programmation C
    float note2;   // Note en Système d'exploitation
};

int main() {
    struct Etudiant etudiants[5];

    // --- Initialisation des données ---

    // Étudiant.e 1
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    // Étudiant.e 2
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    // Étudiant.e 3
    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Alice");
    strcpy(etudiants[2].adresse, "5, Rue des Écoles, Paris");
    etudiants[2].note1 = 15.2;
    etudiants[2].note2 = 13.6;

    // Étudiant.e 4
    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "11, Avenue Victor Hugo, Nice");
    etudiants[3].note1 = 11.0;
    etudiants[3].note2 = 10.4;

    // Étudiant.e 5
    strcpy(etudiants[4].nom, "Lambert");
    strcpy(etudiants[4].prenom, "Sophie");
    strcpy(etudiants[4].adresse, "9, Impasse des Lilas, Toulouse");
    etudiants[4].note1 = 17.8;
    etudiants[4].note2 = 18.3;

    // --- Affichage des informations ---

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prénom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note 1   : %.2f\n", etudiants[i].note1);
        printf("Note 2   : %.2f\n\n", etudiants[i].note2);
    }

    return 0;
}
