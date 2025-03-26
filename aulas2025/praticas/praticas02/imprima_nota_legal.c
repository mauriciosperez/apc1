#include <stdio.h>

int main() {
	
	printf("==============================\n");
	printf("     N O T A  L E G A L       \n");
	printf("==============================\n");

	printf("%s\t\t%s\t%s\n", "Produto", "Qtd", "Valor Unitario");
	printf("%s\t%03i\t\t%.2f\n", "Camiseta", 2, 39.99);
	printf("%s\t\t%03i\t\t%.2f\n", "Calça  ", 1, 89.90);
	printf("%s\t%03i\t\t%.2f\n", "Meia Social", 3, 19.99);

	printf("==============================\n");
	printf("%s\t\t\t%.2f\n", "Total", 229.85);

	return 0;
}
