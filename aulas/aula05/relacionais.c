#include <stdio.h>

int main(){

  int numero1, numero2;

  printf("Digite o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;

  printf("os numeros sao iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("os numeros sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("O primeiro numero eh maior? %i\n", eh_maior);

  int eh_menor = numero1 < numero2;
  printf("O primeiro numero eh menos? %i\n", eh_menor);

  int eh_maior_ou_igual = numero1 >= numero2;
  printf("O primeiro numero eh maior ou igual? %i\n", eh_maior_ou_igual);

  int eh_menor_ou_igual = numero1 <= numero2;
  printf("O primeiro numero eh menor ou igual? %i\n", eh_menor_ou_igual);
  
  
  return 0;
}