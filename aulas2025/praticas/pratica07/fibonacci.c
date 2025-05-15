#include <stdio.h>

int main() {

    int n;
    int anterior = 0;
    int proximo = 1;
    int auxiliar = proximo;

    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = 0 ; i < n ; i++) {

        printf("%i\n", proximo);


        proximo = proximo + anterior;

        anterior = auxiliar;

    }

    return 0;
}
