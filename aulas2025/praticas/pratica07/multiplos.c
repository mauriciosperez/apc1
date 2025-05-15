#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    for (int i = 1; i <=101 ; i++) {

        if (numero % i == 0) {

            printf("%i\n", i);

        }

    }

    return 0;
}
