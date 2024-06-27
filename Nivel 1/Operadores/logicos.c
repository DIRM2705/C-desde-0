#include <stdio.h>

void main()
{
    int a = 0;

    short int no_cero = 5 && 3;
    printf("5&&3: %d\n", no_cero);

    short int un_cero = 6 || 0;
    printf("6||0: %d\n", un_cero);

    short int opuesto = !a;
    printf("!a: %d\n", opuesto);
}