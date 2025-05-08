#include <stdio.h>
//#include <stdlib.h>

int main() {

    int opcao = 0;

    while(opcao !=4){

        //system("clear");
        printf("\033c");

        printf("-----------------------\n");
        printf("|       MEU JOGO      |\n");
        printf("-----------------------\n");
        printf("|                     |\n");
        printf("|   1 - Novo Jogo     |\n");
        printf("|   2 - Ver Score     |\n");
        printf("|   3 - Sobre         |\n");
        printf("|   4 - Sair          |\n");
        printf("|                     |\n");
        printf("-----------------------\n");
        printf("Escolha uma opção > \n");
        scanf("%i", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1: {
                printf("\033c");
                int nivel = 0;
                printf("Novo Jogo\n");
                printf("Escolha um nível\n");
                printf("1 - Fácil  \n");
                printf("2 - Médio  \n");
                printf("3 - Difícil\n");
                printf("> ");
                scanf("%i", &nivel);
                break;
            }
            case 2:{
                printf("\033c");
                printf("Score\n");
                printf("1 - Jogador A - 10000 pts\n");
                printf("2 - Jogador B - 9000 pts\n");
                printf("3 - Jogador C - 8000 pts\n");
                printf("4 - Jogador D - 7000 pts\n");
                printf("5 - Jogador E - 6000 pts\n");
                printf("Pressione ENTER para continuar ...");
                while(getchar() != '\n');
                break;
            }
            case 3:{
                printf("\033c");
                printf("Sobre o jobo\n");
                printf("Desenvolvido em C\n");
                printf("Por programador\n");
                printf("Copyright (c) 2025 Author. All Rights Reserved.\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
                break;

            }
            case 4:{
                printf("Até logo!\n");
                break;
            }
            default:
                printf("\033c");
                printf("Opcao inválida. Tente novamente.\n");
        }


    }

    return 0;
}
