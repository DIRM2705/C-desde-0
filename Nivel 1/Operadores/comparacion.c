#include <stdio.h>

void main()
{
    //La consola imprimirá 0 si es falso 1 si verdadero
    short int iguales = 3 == 5;
    printf("3==5: %d\n", iguales);

    short int diferentes = 4 != 4;
    printf("4!=4: %d\n", diferentes);

    short int mayor_igual = 3 >= 2;
    printf("3 >= 2: %d\n", mayor_igual);

    short int menor_igual = 9 <= 5;
    printf("9 <= 5: %d\n", menor_igual);

    short int mayor_que = 6 > 1;
    printf("6 > 1: %d\n", mayor_que);

    short int menor_que = 1 < 2;
    printf("1 < 2 : %d\n", menor_que);
}