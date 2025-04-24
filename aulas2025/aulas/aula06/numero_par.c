#include <stdio.h>

int main(){

    int numero = 0;
    printf("Entre com um número inteiro: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero  % 2 == 0;

    if (numero_eh_divisivel_por_2) {

        printf("O numero %i é par\n", numero);
        printf("%i\n", numero_eh_divisivel_por_2);

    } else {
        printf("O número %i é impar\n", numero);
        printf("%i\n", numero_eh_divisivel_por_2);
    }


    return 0;
}
