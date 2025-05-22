#include <stdio.h>

int main() {

    int numeros[10];

    int numero;

    int achou = -1;

    for (int i = 0; i < 10; i++){

    printf("Digite o numero %i: ", i);
        scanf("%i", &numeros[i]);

    }

    printf("Digite o numero: ");
    scanf("%i", &numero);

    for(int i = 0; i<10 ; i++){
        if (numeros[i] == numero){
            achou = i;
        }

    }

    if (achou < 0) {
        printf("Numero nao encontrado\n");
    } else {
        printf("Numero encontrado na posicao %i\n", achou);
    }

    return 0;
}
