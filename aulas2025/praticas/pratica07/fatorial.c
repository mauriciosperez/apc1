#include <stdio.h>

int main() {

    int numero;

    printf("Variavel numero: ");
    scanf("%i", &numero);

    int fatorial = numero;

    for (int i = numero-1; i > 0; i--) {

        fatorial = fatorial * i;

    }

    printf("numero: %i \nfatorial: %i\n", numero, fatorial);

    return 0;
}
