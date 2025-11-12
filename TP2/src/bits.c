#include <stdio.h>

int main() {
    unsigned int d = 0b0000000000010000000000001000; // exemple avec 4e et 20e bits à 1
    int nb_bits = sizeof(int) * 8; // généralement 32 bits

    // Calcul des positions depuis la droite (LSB = bit 0)
    int bit4_pos = nb_bits - 4;   // 4e bit à partir de la gauche
    int bit20_pos = nb_bits - 20; // 20e bit à partir de la gauche

    // Extraction des bits (en les décalant vers la droite puis en les masquant avec & 1)
    int bit4 = (d >> bit4_pos) & 1;
    int bit20 = (d >> bit20_pos) & 1;

    // Vérification : les deux bits sont-ils égaux à 1 ?
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("Valeur de d : %u\n", d);
    printf("4e bit de gauche : %d\n", bit4);
    printf("20e bit de gauche : %d\n", bit20);
    printf("Résultat final : %d\n", resultat);

    return 0;
}
