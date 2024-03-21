#include <stdio.h>

int main(){

  float valor_em_giga;
  float valor_em_bytes;

  printf("Informe o valor em GB: ");
  scanf("%f", &valor_em_giga);

  valor_em_bytes = valor_em_giga * 1024 * 1024 * 1024;

  printf("O valor em Bytes eh: %f \n", valor_em_bytes);
  
  return 0;
}