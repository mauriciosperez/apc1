#include <stdio.h>

int main(){
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;
  
  float preco_produto = 100.0f;
  float preco_final;

  float preco_icms = ICMS *preco_produto;
  float preco_cofins = COFINS *preco_produto;
  float preco_pis_pasep = PIS_PASEP *preco_produto;
  
  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_produto;
  printf("O preco final do produto eh %f\n", preco_final);

  printf("Valor ICMS: %f\n", preco_icms);
  printf("Valor COFINS: %f\n", preco_cofins);
  printf("Valor PIS/PASEP: %f\n", preco_pis_pasep);

  return 0;
}