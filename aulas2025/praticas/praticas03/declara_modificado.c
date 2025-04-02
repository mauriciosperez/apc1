#include <stdio.h>

int main() {

    long int populacao_mundial = 7800000000L;

    const short int HORA_EM_SECUNDOS = 3600;

    long double precisao_extrema = 3.14159265358979323846L;

    printf("População Mundial: %li\n", populacao_mundial);

    printf("1 hora corresponde a %i segundos\n", HORA_EM_SECUNDOS);

    printf("Precisão Extrema: %.20Lf\n", precisao_extrema);

    return 0;
}
