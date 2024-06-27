#include <stdio.h>

void main()
{
    float valor = (25 + 6) * 5 + 6 > 16 - 2 / 4 & 1;

    /*
        (25+6) = 11
        11*5 = 55
        55+6 = 61

        2/4 = 0.5
        16-0.5 = 15.5

        61 > 15.15 = 1

        1 & 1 = 1
    */

   printf("El resultado de la operación es: %0.2f\n", valor);
}