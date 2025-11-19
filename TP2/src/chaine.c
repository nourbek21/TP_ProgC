#include <stdio.h>

int main() {
    char s1[100] = "Hello";
    char s2[100] = " World!";
    char copie[100];
    char concat[200];
    
    int i = 0;
    int longueur = 0;

    /* --- 1) Calcul de la longueur de s1 --- */
    while (s1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de s1 = %d\n", longueur);

    /* --- 2) Copie de s1 dans copie --- */
    i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie = %s\n", copie);

    /* --- 3) Concaténation de s1 et s2 dans concat --- */

    /* Copier s1 dans concat */
    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }

    /* Ajouter s2 après s1 */
    int j = 0;
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Concaténation = %s\n", concat);

    return 0;
}
