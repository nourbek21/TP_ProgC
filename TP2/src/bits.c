#include <stdio.h>

int main() {
    int d = 0xF0008000;  // Exemple : à remplacer par la valeur que vous voulez tester

    // Taille en bits d'un int
    int total_bits = sizeof(int) * 8;

    // Position des bits à tester en comptant depuis la gauche (bit 1 = bit le plus à gauche)
    int bit4_pos = total_bits - 4;   // 4ème bit depuis la gauche
    int bit20_pos = total_bits - 20; // 20ème bit depuis la gauche

    // Extraction des bits
    int bit4 = (d >> bit4_pos) & 1;
    int bit20 = (d >> bit20_pos) & 1;

    // Vérification
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
