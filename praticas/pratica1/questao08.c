/** 
 Faça um programa que converta um tempo expresso em segundos para um valor em horas, minutos e segundos. (Ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

**/
#include <stdio.h>
#include <math.h>

int main(){

  int segundos;

  printf("informe os segundos: ");
  scanf("%i", &segundos);

  int h = segundos/3600;
  int m = (segundos%3600)/60;
  int s = (segundos%3600)%60;
  printf("%i horas", h);

  printf(" %i minutos", m);
  printf(" %i segundos\n", s);

  printf("mod min: %i \n", segundos%3600);
  printf("mod min div: %i\n", (segundos)/60);
  printf("mod sec: %i\n", (segundos%3600)%60);
  
  return 0;
}