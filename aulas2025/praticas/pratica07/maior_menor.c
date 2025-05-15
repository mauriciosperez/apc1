#include <stdio.h>

int main() {

    int numero, maior, menor;

    //printf("Digite um numero: ");
    //scanf("%i", &numero);

    maior = 0;
    menor = 0;

    while (numero != 0) {

        printf("Digite um numero: ");
        scanf("%i", &numero);


        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }


    }


    printf("Maior: %i\nMenor: %i\n",maior, menor);


    return 0;
}
