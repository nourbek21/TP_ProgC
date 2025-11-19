#include <stdio.h>
#include "operator.h"
#include "operator.c"

int main() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // espace avant %c pour ignorer les caractères blancs

    int resultat;

    switch(op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et(num1, num2);
            break;
        case '|':
            resultat = ou(num1, num2);
            break;
        case '~':
            resultat = negation(num1); // la négation se fait sur num1 uniquement
            break;
        default:
            printf("Opérateur non reconnu.\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);

    return 0;
}

