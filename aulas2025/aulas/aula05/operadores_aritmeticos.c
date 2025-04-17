#include <stdio.h>

int main() {
    // + soma
    // - subtração
    // * multiplicação
    // / divisão
    // % resto da divisão

    int numero1 = 10;
    int numero2 = 20;

    int soma = numero1+numero2;

    printf("A soma de %i e %i = %i\n", numero1, numero2, soma);

    //=================================

    int subtracao = numero1 - numero2;

    printf("A subtracao de %i e %i = %i\n", numero1, numero2, subtracao);

    //=================================

    int multiplicao = numero1*numero2;

    printf("A multiplicao de %i e %i = %i\n", numero1, numero2, multiplicao);

    //=================================

    float divisao = numero1/(float)numero2;

    printf("A divisao de %i e %i = %.1f\n", numero1, numero2, divisao);

    //=================================

    int resto = numero1 % numero2;

    printf("O resto de %i e %i = %i\n", numero1, numero2, resto);

    //=================================

    int operacao = 1 / 2 + 5 * 4 % 1 - 2;

    printf("a operacao 1 / 2 + 5 * 4 %% 1 - 2 = %i\n", operacao);

    operacao = (1 / 2 + 5) * 4 % 1 -2;

    printf("a operacao (1 / 2 + 5) * 4 %% 1 - 2 = %i\n", operacao);


    return 0;
}
