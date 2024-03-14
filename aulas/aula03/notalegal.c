#include <stdio.h>

int main(){

  printf("\x1b[32m-------------------------\n");
  printf("     NOTA LEGAL          \n");
  printf("-------------------------\x1b[0m\n");

  printf("ITEM         QTD \t VALOR\n");
  printf("%-13s %3i %8.2f\n", "Banana Nanica", 1, 15.00);
  printf("%-13s %.3i %8.2f\n", "Maca Fuji", 10, 50.00);
  printf("%-13s %.3i %8.2f\n", "Uva Globo", 5, 26.00);
  //printf("Banana Nanica          1    15.00\n");
  //printf("Maca Fujo              10   50.00\n");
  //printf("Uva Globo               5   26.00\n");
  printf("-------------------------\n");
  printf("\x1b[34mTotal...........: %8.2f\x1b[0m\n", 91.00);
  
  return 0;
}
