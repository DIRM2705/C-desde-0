#include <stdio.h>

void main()
{
    float ejercicio1 = 6*2/(2+1 * 2/3 +6) +8 * (8/4);
    float ejercicio2 = (17/2)-2/3+6%2 == 0;
    short int ejercicio3 = !(5>10) && (2==2);
    short int ejercicio4 = 8|3+5%3&7>=1;

    printf("Las respuestas de los ejercicios son: \n");
    printf("1. %.2f", ejercicio1);
    printf("2. %.2f", ejercicio2);
    printf("3. %d", ejercicio3);
    printf("4. %d", ejercicio4);
}