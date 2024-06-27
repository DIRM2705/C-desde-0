#include <stdio.h>

void main()
{
    int variable = 2;
    printf("El actual de la variable es: %d\n", variable);

    variable += 2;
    printf("El actual de la variable es: %d\n", variable);

    variable -= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable *= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable /= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable %= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable <<= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable >>= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable &= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable |= 2;
    printf("El actual de la variable es: %d\n", variable);

    variable ^= 2;
    printf("El actual de la variable es: %d\n", variable);
}