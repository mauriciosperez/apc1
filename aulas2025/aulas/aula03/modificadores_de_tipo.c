#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    // unsigned char -> 0 a 255
    // unsigned int -> 0 a 4bi
    // short int -> -32mil a 32mil
    // long int -> -nonilhões a nonilhões
    // unsigned long int -> 0 a 18lhões
    // long double  -> 0 a


    printf("O tipo 'short int' ocupa %lu byte(s) \n", sizeof(short int));
    printf("O tipo 'long int' ocupa %lu byte(s) \n", sizeof(long int));
    printf("O tipo 'long double' ocupa %lu byte(s) \n", sizeof(long double));


    printf("O tipo 'unsigned char' vai de 0 a %i\n", UCHAR_MAX);
    printf("O tipo 'unsigned int' vai de 0 a %u\n", UINT_MAX);
    printf("O tipo 'short int' vai de %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("O tipo 'unsigned short int' vai de 0 a %d\n", USHRT_MAX);
    printf("O tipo 'long int' vai de %li a %li\n", LONG_MIN, LONG_MAX);
    printf("O tipo 'unsigned long int' vai de 0 a %lu\n", ULONG_MAX);

    printf("O tipo 'long double' vai de %LE a %LE\n", LDBL_MIN,LDBL_MAX);


    return 0;
}
