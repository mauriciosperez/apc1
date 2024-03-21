#include <stdio.h>

int main(){

  unsigned int base;
  unsigned int altura;

  unsigned int area;

  printf("Informe a base: ");
  scanf("%u", &base);

  printf("Informe a altura: ");
  scanf("%u", &altura);

  area = (base*altura)/2;

  printf("A area do triangulo eh %u\n", area);
  
  return 0;
}