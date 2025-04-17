#include <stdio.h>

int main(){

    char tecla;

    printf("Pressione outra tecla e depios ENTER: ");

    scanf("%c",&tecla); // não sabe tecla = valor.
                        // Então precisa acessar endereço da variável com o operador &
    getchar();
    printf("Vc pressionou a tecla: %c\n", tecla);

    printf("Pressione outra tecla e depios ENTER: ");

    scanf("%c", &tecla);
    getchar();

    printf("Vc pressionou a tecla: %c\n", tecla);

    char nome [21];

    printf("Informe seu nome: \n");

    scanf("%[^\n]s", nome);
    getchar();

    printf("Olá, %s\n", nome);

    return 0;
}
