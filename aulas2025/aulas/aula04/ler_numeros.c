#include <stdio.h>

int main(){

    int numero;

    printf("Informe um número inteiro: ");

    scanf("%i",&numero);

    printf("O número informado foi %i\n", numero);

    float nota;

    printf("Informe uma nota entre 0.0 e 10.0: ");
    scanf("%f", &nota);
    printf("Sua nota foi %f\n", nota);

    return 0;
}
