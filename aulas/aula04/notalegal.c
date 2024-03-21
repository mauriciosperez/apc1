#include <stdio.h>

int main (){
  char nome_produto[31];
  int quantidade;
  float valor;

  int deu_certo;

  printf("Entre o nome do produto: ");
  deu_certo = scanf("%[^\n]s", nome_produto);

  printf("Entre com a qtd do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[32m-------------------------\n");
  printf("     NOTA LEGAL          \n");
  printf("-------------------------\x1b[0m\n");

  printf("ITEM         QTD \t VALOR\n");
  printf("%-13s %3i %8.2f\n", nome_produto, quantidade, valor);
  //printf("Banana Nanica          1    15.00\n");
  //printf("Maca Fujo              10   50.00\n");
  //printf("Uva Globo               5   26.00\n");
  printf("-------------------------\n");
  printf("\x1b[34mTotal...........: %8.2f\x1b[0m\n", 91.00);
  
  return 0;
}