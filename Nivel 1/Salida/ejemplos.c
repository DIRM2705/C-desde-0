#include <stdio.h>

void main()
{
    // Imprimir sin datos
    printf("Hello world!");

    // Imprimir un entero
    printf("2 + 2 = %d", 4);

    // Imprimir un decimal de 2 cifras
    printf("5/2 = %.2f", 2.5);

    // Imprimir un decimal de 4 cifras
    printf("0.23 * 0.15 = %.4lf", 0.0345);

    // Imprimir un carácter
    printf("Después de la A sigue la %c", 'B');

    // Imprimir varios datos
    printf("%d, %.2f y %c son tres números de menor a mayor", -16, 3.14, '8');
}