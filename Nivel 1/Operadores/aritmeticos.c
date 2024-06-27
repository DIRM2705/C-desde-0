#include <stdio.h>

void main()
{
    int suma = 2 + 2;
    printf("2 + 2 = %d\n", suma);
    
    float resta = 3.2 - 5;
    printf("3.2 - 5 = %.2f\n", resta);

    double mult = 5.05*4.93;
    printf("5.05 * 4.93 = %.4lf\n", mult);

    float division = 1/3;
    printf("1 / 3 = %.2f\n", division);

    int mod = 5%2;
    printf("5 %% 2 = %d\n", mod);

    int contador = 0;
    contador++;
    printf("El valor de contador es %d\n", contador);

    int acumulador = 9;
    acumulador--;
    printf("El valor de acumulador es %d\n", acumulador);
}