#include <stdio.h>

int main() {

    float total = 0.0f;

    float nota_fiscal[5][3];

    for (int i = 0; i<5 ; i++) {

        printf("nota_fiscal[%i][0]: ", i);
        scanf("%f", &nota_fiscal[i][0]);

        printf("nota_fiscal[%i][1]: ", i);
        scanf("%f", &nota_fiscal[i][1]);

        nota_fiscal[i][2] = nota_fiscal[i][0]*nota_fiscal[i][0];

    }


    for (int i = 0; i<5; i++){
        for (int j = 0; j<3; j++ ){
            printf("Valor: %f\n", nota_fiscal[i][j]);
        }

    }

    return 0;
}
