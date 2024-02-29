#include<stdio.h>

int main (){

  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("Entre a primeira nota: \n");
  scanf("%f", &nota1);

  printf("Entre a segunda nota\n");
  scanf("%f",&nota2);

  float media = (0.4*nota1) + (0.6*nota2);

  printf("\n");


  if (media >= 5.0){
    printf("Aprovado\n");
  } else {
    printf("Reprovado\n");
  }

  printf("\n");

  printf("A media do aluno é: %.2f\n", media);
  
  return 0;
}