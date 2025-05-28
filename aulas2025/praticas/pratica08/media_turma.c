#include <stdio.h>

int main() {
    float notas[9];

    float soma, media;
    int qtd_acima_media = 0;
    int qtd_acima_media2 = 0;

    for (int i = 0; i<10; i++){
        printf("Note %i\n", i);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma/10;

    for (int i = 0; i < 10; i++){
        if (notas[i] > media) {
            ++qtd_acima_media;
            qtd_acima_media2++;
        }

    }

    printf("Media: %f\n", media);
    printf("Acima da Media: %i\n", qtd_acima_media);
    printf("Acima da Media2: %i\n", qtd_acima_media2);

    return 0;
}
