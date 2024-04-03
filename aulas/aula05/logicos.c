#include <stdio.h>

int main(){

  int numero;

  //  0 < x < 10, 0 < x E x < 10

  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero);

  int maior_q_zero_e_maior_q_10 = numero > 0 && numero < 10;
  printf("O numero eh maior que zero e menor que 10? %i\n", maior_q_zero_e_maior_q_10);

  int menor_q_zero_ou_maior_q_10 = numero < 0 || numero > 10;
  printf("O numero eh menor que zero ou maior que 10? %i\n", menor_q_zero_ou_maior_q_10);

  // x NAO < 0
  int nao_eh_menor_q_0 = !(numero < 0);
  printf("O numero nao eh menor que 0? %i\n", nao_eh_menor_q_0);

  return 0;
}