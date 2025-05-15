#include <stdio.h>

int main() {

    float boletim[8][3]; // matriz bidimensional = tabela = array
    //       linha e coluna

    for (int i = 0; i < 8; i++){

        printf("Disciplina %i\n", i+1);
        for (int j = 0; j < 2; j++) {
            printf("Nota A%i\n",j+1);
            scanf("%f", &boletim[i][j]);
        }
    }


    return  0;
}
