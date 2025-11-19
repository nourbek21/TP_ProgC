#include <stdio.h>
#include <string.h> // pour memcpy

// Fonction d'affichage du contenu en hexadécimal (byte par byte)
void print_hex(void *ptr, size_t size) {
    unsigned char buffer[32];
    memcpy(buffer, ptr, size); // copie brute des octets

    for (int i = size - 1; i >= 0; i--) {
        printf("%02x", buffer[i]); 
    }
}

int main() {
    // Variables de types de base
    char c = 0x12;
    short s = 0x1234;
    int i = 0xa47865ff;
    long int li = 0x12345678;
    long long int lli = 0x1122334455667788;
    float f = 2.0f;               // représentera 0x40000000
    double d = 3.14;              // hex dépend de la machine
    long double ld = 1.0L;        // idem

    // Pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("\n=== AVANT MANIPULATION ===\n\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc);
    print_hex(pc, sizeof(c));  printf("\n");

    printf("Adresse de s  : %p, Valeur : ", (void*)ps);
    print_hex(ps, sizeof(s));  printf("\n");

    printf("Adresse de i  : %p, Valeur : ", (void*)pi);
    print_hex(pi, sizeof(i));  printf("\n");

    printf("Adresse de li : %p, Valeur : ", (void*)pli);
    print_hex(pli, sizeof(li)); printf("\n");

    printf("Adresse de lli: %p, Valeur : ", (void*)plli);
    print_hex(plli, sizeof(lli)); printf("\n");

    printf("Adresse de f  : %p, Valeur : ", (void*)pf);
    print_hex(pf, sizeof(f));  printf("\n");

    printf("Adresse de d  : %p, Valeur : ", (void*)pd);
    print_hex(pd, sizeof(d));  printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    print_hex(pld, sizeof(ld)); printf("\n");

    // -------------------------------
    // Manipulations via leurs pointeurs
    // -------------------------------
    *pc  = 0x34;
    *ps  = 0x5678;
    *pi  = 0xa47865fe;      // exemple : diminue la valeur
    *pli = 0x87654321;
    *plli = 0x8877665544332211;
    *pf  = 1.0f;            // devient 0x3f800000 en hex
    *pd  = 6.28;
    *pld = 2.0L;

    printf("\n=== APRÈS MANIPULATION ===\n\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc);
    print_hex(pc, sizeof(c));  printf("\n");

    printf("Adresse de s  : %p, Valeur : ", (void*)ps);
    print_hex(ps, sizeof(s));  printf("\n");

    printf("Adresse de i  : %p, Valeur : ", (void*)pi);
    print_hex(pi, sizeof(i));  printf("\n");

    printf("Adresse de li : %p, Valeur : ", (void*)pli);
    print_hex(pli, sizeof(li)); printf("\n");

    printf("Adresse de lli: %p, Valeur : ", (void*)plli);
    print_hex(plli, sizeof(lli)); printf("\n");

    printf("Adresse de f  : %p, Valeur : ", (void*)pf);
    print_hex(pf, sizeof(f));  printf("\n");

    printf("Adresse de d  : %p, Valeur : ", (void*)pd);
    print_hex(pd, sizeof(d));  printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    print_hex(pld, sizeof(ld)); printf("\n");

    return 0;
}
