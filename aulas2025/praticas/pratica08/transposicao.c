#include <stdio.h>

int main(){

    char frase[31];

    printf("Digite a frase de ate 30 caracteres: \n");
    scanf("%s", frase);

    char matriz[6][5];
    int k = 0;

    for (int i = 0 ; i <=5 ; i++) {
        for (int j = 0 ; j <=4; j++) {
            matriz[i][j] = frase[k];
            k++;
        }
    }

    printf("A transposicao da frase eh: \n");

    for (int j = 0 ; j<=4 ; j++) {
        for (int i = 0 ; i <=5 ; i++) {
            printf("%c", matriz[i][j]);
        }

    }

    printf("\n");


    return 0;
}
