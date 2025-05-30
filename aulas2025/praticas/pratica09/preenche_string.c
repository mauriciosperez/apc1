#include <stdio.h>
#include <string.h>

int main(){

    char string[11];

    memset(string, '\0', sizeof(string));

    char tecla;

    printf("Valor para tecla: ");
    scanf("%c", &tecla);

    memset(string, tecla, 10);

    printf("Variavel string: %s\n", string);

    memset(string, '*', 5);

    printf("Variavel string: %s\n", string);

    string[5] = '\0';

    printf("Variavel string: %s\n", string);

    for (int i = 0; i <= 10; i++){
        printf("%c", string[i]);
    }

    printf("\n");


    return 0;
}
