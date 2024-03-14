/**
Faça um programa que o valor da hora de trabalho e o total de horas trabalhadas no mês
e calcule o salário bruto, o salário líquido e os impostos descontatos.
Considere IR igual a 25% e INSS igual a 11%.
**/

#include <stdio.h>

int main (){

  float valorHora, totalHoras, salarioBruto, salarioLiquido;

  const float IR=0.25, INSS=0.11;
  
  printf("Digite o valor da hora de trabalho: ");
  scanf("%f", &valorHora);
  printf("Digite o total de horas trabalhadas no mês: ");
  scanf("%f", &totalHoras);

  salarioBruto = valorHora * totalHoras;

  float imposto_renda = salarioBruto * IR;
  float imposto_inss = salarioBruto * INSS;

  salarioLiquido = salarioBruto - imposto_inss - imposto_renda;

  printf("-----------------------------------\n");
  printf("          C O N T R A C H E Q U E  \n");
  printf("-----------------------------------\n");
  printf("\x1b[34mSalário Bruto.......: R$ %8.2f\x1b[0m\n", salarioBruto);
  printf("\x1b[31mImposto de Renda....: R$ %8.2f\n", imposto_renda);
  printf("Imposto INSS........: R$ %8.2f\x1b[0m\n", imposto_inss);
  
  printf("\x1b[32mSalário Líquido.....: R$ %8.2f\x1b[0m\n", salarioLiquido);

  return 0;
}