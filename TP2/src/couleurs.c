#include <stdio.h>

// Structure représentant une couleur RGBA (4 octets)
struct Couleur {
    unsigned char r; // Rouge
    unsigned char g; // Vert
    unsigned char b; // Bleu
    unsigned char a; // Alpha
};

int main() {
    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},  // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff},  // Couleur 2
        {0xaa, 0x33, 0x11, 0xff},  // Couleur 3
        {0x10, 0x80, 0xf0, 0xff},  // Couleur 4
        {0x00, 0xff, 0x99, 0xff},  // Couleur 5
        {0x55, 0x44, 0x33, 0xff},  // Couleur 6
        {0xff, 0x00, 0x00, 0xff},  // Couleur 7 (rouge pur)
        {0x00, 0xff, 0x00, 0xff},  // Couleur 8 (vert pur)
        {0x00, 0x00, 0xff, 0xff},  // Couleur 9 (bleu pur)
        {0xff, 0xff, 0xff, 0xff}   // Couleur 10 (blanc)
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %d\n", couleurs[i].r);
        printf("  Vert  : %d\n", couleurs[i].g);
        printf("  Bleu  : %d\n", couleurs[i].b);
        printf("  Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}
