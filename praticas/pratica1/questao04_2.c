#include <stdio.h>

int main(){

  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float preco_produto;
  float preco_final;

  printf("Informe o preco do produto: ");
  scanf("%f", &preco_produto);


  float preco_icms = ICMS *preco_produto;
  float preco_cofins = COFINS *preco_produto;
  float preco_pis_pasep = PIS_PASEP *preco_produto;

  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_produto;

  printf("O preco final do produto eh %.2f\n", preco_final);

  printf("Valor ICMS: %.2f\n", preco_icms);
  printf("Valor COFINS: %.2f\n", preco_cofins);
  printf("Valor PIS/PASEP: %.2f\n", preco_pis_pasep);
  
  return 0;
}