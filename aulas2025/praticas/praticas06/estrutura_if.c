#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numero);
    getchar();

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if(numero_eh_divisivel_por_2) {
        printf("Numero %i é par\n", numero);
    } else {
        printf("Número é impar\n");
    }

    /*
        * IDADE
    */

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);
    getchar();

    if (idade < 16) {
        printf("Você não pode votar\n");
    } else {
        if (idade < 18 || idade > 70) {
            printf("Você pode votar\n");
        } else {
            printf("Você é obrigado a votar!\n");
        }
    }

    /*
        * MEDIA
    */

    float media;
    printf("Digite sua média final: \n");
    scanf("%f", &media);
    getchar();

    if (media == 0.0f) {
        printf("Sua menção é SR!\n");
    } else if (media < 3.0f) {
        printf("Sua menção é II!\n");
    } else if (media < 5.0f) {
        printf("Sua menção é MI!\n");
    } else if (media < 7.0f) {
        printf("Sua menção é MM!\n");
    } else if (media < 9.0f){
        printf("Sua menção é MS!\n");
    } else {
        printf("Sua menção é SS!\n");
    }


    return 0;

}
