#include <stdio.h>

int main (){

  float prova_a1;
  float prova_a2;
  float resultado_final;

  printf("Entre com a nota da A1: ");
  scanf("%f", &prova_a1);

  printf("Entre com a nota da A2: ");
  scanf("%f", &prova_a2);

  resultado_final = (prova_a1*0.4) + (prova_a2*0.6);

  printf("Resultado final: %.2f \n", resultado_final);
  
  return 0;
}