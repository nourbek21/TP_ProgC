#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    printf("=== Affichage en binaire ===\n\n");

    for (int n = 0; n < taille; n++) {
        int nombre = nombres[n];
        printf("Nombre : %d\nBinaire : ", nombre);

        // On parcourt les bits du plus significatif au moins significatif (32 bits)
        int nb_bits = sizeof(int) * 8;
        int bitTrouve = 0; // pour éviter d'afficher les zéros inutiles au début

        for (int i = nb_bits - 1; i >= 0; i--) {
            int bit = (nombre >> i) & 1;
            if (bit)
                bitTrouve = 1;
            if (bitTrouve)
                printf("%d", bit);
        }

        // Si le nombre est 0, on affiche simplement 0
        if (!bitTrouve)
            printf("0");

        printf("\n\n");
    }

    return 0;
}
