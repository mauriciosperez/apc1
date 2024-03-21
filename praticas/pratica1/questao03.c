#include <stdio.h>

int main() {
  const float PI = 3.1416;
  
  int raio;
  float perimetro;

  printf("Informe o raio: ");
  scanf("%i", &raio);

  perimetro = 2 * PI * raio;

  printf("O perimetro da pizza eh: %.2f\n", perimetro);

  return 0;
  
  
}