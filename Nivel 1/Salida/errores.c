#include <stdio.h>

void main()
{
    // Faltan comillas
    printf(Hola mundo);

    // Falta punto y coma
    printf("2 + 2 = %d", 4)

    // No coinciden los tipos de dato
    printf("1 + 1 = %c", 2);

    // Hay demasiados datos
    printf("3 + 9 = %d", 1, 2);

    // No hay suficientes datos
    printf("%d, %.2f y %c son tres números", -16, 5);
}