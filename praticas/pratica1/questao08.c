/** 
 Faça um programa que converta um tempo expresso em segundos para um valor em horas, minutos e segundos. (Ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

**/
#include <stdio.h>
#include <math.h>

int main(){

  float segundos;

  printf("informe os segundos: ");
  scanf("%f", &segundos);

  printf("Em horas: %f ", segundos / 3600);

  printf(" %f minutos", segundos/60);
  printf(" %f segundos", segundos);
  
  return 0;
}