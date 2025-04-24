#include <stdio.h>

int main() {

    int idade = 0;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    if(idade >= 16) {
        if (idade >= 18 && idade<=70) {
            printf("Voto obrigatório.\n");
        } else {
            printf("Voto opcional.\n");
        }
    } else {
        printf("Proibido votar.\n");
    }

    return 0;

}
