/**

Faça um programa que calcume aaltura  alcançada por um aiao após ter percorrido certa distância (sen(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

**/

#include <stdio.h>
#include <math.h> 

int main (){
  float distancia;
  float angulo;
  float altura;
  
  printf("Entre com a distancia percorrida: ");
  scanf("%f", &distancia);

  printf("Entre com o angulo de inclinação do avião: ");
  scanf("%f", &angulo);

  altura = distancia * sin(angulo * (M_PI / 180));
  printf("A altura alcançada pelo avião é: %f\n", altura);
  
  return 0;
}