#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '*'; // changer le caractère pour tester différentes opérations

    printf("num1 = %d, num2 = %d, opérateur = %c\n", num1, num2, op);

    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zéro !\n");
            break;

        case '&':
            printf("Résultat (ET binaire) : %d\n", num1 & num2);
            break;

        case '|':
            printf("Résultat (OU binaire) : %d\n", num1 | num2);
            break;

        case '~':
            printf("Résultat (~num1) : %d\n", ~num1);
            printf("Résultat (~num2) : %d\n", ~num2);
            break;

        default:
            printf("Erreur : opérateur inconnu '%c'\n", op);
            break;
    }

    return 0;
}


