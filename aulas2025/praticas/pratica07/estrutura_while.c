#include <stdio.h>

int main() {

    int nota;

    printf("Digite uma nota: ");
    scanf("%i", &nota);

    while (nota < 1 || nota > 10) {

        printf("Nota Invalida. Tente novamente!\n");
        scanf("%i", &nota);

    }

    return 0;
}
