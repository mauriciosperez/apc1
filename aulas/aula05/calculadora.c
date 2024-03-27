#include <stdio.h>
#include <math.h>

int main (){

  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma eh: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtracao eh: %i \n", subtracao);

  int multiplicacao = numero1 *numero2;
  printf("A multiplicacao eh: %i \n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  printf("A divisao eh: %f \n", divisao);

  int resto = numero1 % numero2;
  printf("O resto eh: %i \n", resto);

  printf("O incremento do primeiro numero eh: %i\n", numero1++);
  printf("O incremento do primeiro numero eh: %i\n", ++numero1);

  printf("O decremento do primeiro numero eh: %i\n", numero1--);
  printf("O decremento do primeiro numero eh: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero eh: %f\n", raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("O primeiro numero elevado a 3 eh: %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo do primeiro numero na base 2 eh: %f\n", logaritmo2);

  const double PI = 3.1416;
  double seno = sin(numero1*(PI/180));
  printf("O seno do primeiro numero eh: %f\n", seno);
  
  return 0;
}