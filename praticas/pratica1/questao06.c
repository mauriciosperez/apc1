#include <stdio.h>
#include <math.h>

int main (){
  float valor_a;
  float valor_b;
  float valor_c;

  float raiz_x1;
  float raiz_x2;

  printf("Na formula ax^2 + bx + c ");
  printf("Informe o valor de a: ");
  scanf("%f", &valor_a);

  printf("Informe o valor de b: ");
  scanf("%f", &valor_b);

  printf("Informe o valor de c: ");
  scanf("%f", &valor_c);

  raiz_x1 = (-valor_b + sqrt(valor_b*valor_b - 4*valor_a*valor_c))/2*valor_a;
  raiz_x1 = (-valor_b - sqrt(valor_b*valor_b - 4*valor_a*valor_c))/2*valor_a;

  printf("O valor de x1 eh: %f \n", raiz_x1);
  printf("O valor de x2 eh: %f \n", raiz_x2);

  return 0;
}