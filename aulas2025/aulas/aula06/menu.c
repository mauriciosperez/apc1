#include <stdio.h>

int main () {


    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Fazer Recarga\n");
    printf("3 - Ver Recados\n");
    printf("4 - Últimas Licacões\n");
    printf("5 - Sair\n");
    printf("Escilha uma opção -> \n");


    int opcao = 0;
    scanf("%i", &opcao);

//    if (opcao == 1) {
//        printf("Seu saldo é de R$10.0\n");
//    } else if (opcao == 2) {
//        printf("Digite 1 p/ 10,0, 2 p/ 20,00 ou 5 p/ 50,00\n");
//    } else if (opcao == 3) {
//        printf("Vc não tem recados\n");
//    } else if (opcao == 4) {
//        printf("Vc ligou para 8888-8888\n");
//    } else if (opcao == 5) {
//        printf("Obrigado pelo contato. Até logo!\n");
//        return 0;
//    } else {
//
//        printf("Opção invalida. Tente novamente!\n");
//    }


    switch (opcao) {
        case 1:
            printf("Seu saldo é de R$10.0\n");
            break;
        case 2:
            printf("Digite 1 p/ 10,0, 2 p/ 20,00 ou 5 p/ 50,00\n");
            break;
        case 3:
            printf("Vc não tem recados\n");
            break;
        case 4:
            printf("Vc ligou para 8888-8888\n");
            break;
        case 5:
            printf("Obrigado pelo contato. Até logo!\n");
            break;
        default:
            printf("Opção invalida. Tente novamente!\n");
            break;
    }

    return 0;

}
