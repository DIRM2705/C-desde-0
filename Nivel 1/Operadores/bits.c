#include <stdio.h>

void main()
{
    int a = 5; // Equivale a 105 en binario
    int b = 3; // Equivale a 011 en binario

    short int and = a & b; // Resultado: 1
    //   101
    // & 011
    //-------
    //   001
    printf("a & b = %d\n", and);

    short int or = a | b; // Resultado: 7
    //   101
    // | 011
    // ------
    //   111
    printf("a | b = %d\n", or);


    short int xor = a ^ b; // Resultado: -6
    //   101
    // ^ 011
    // -------
    //   110
    printf("a ^ b = %d\n", xor);


    short int not = ~a; // Resultado: 2
    //  ~101
    // -------
    //   010
    printf("~a = %d\n", not);


    short int left_shift = b << 2; // Resultado: 12
    //   011 << 2
    // -------
    //   1100
    printf("b <<  = %d\n", left_shift);


    short int right_shift = a >> 1; // Resultado: 6
    //   101 >> 1
    // -------
    //   010
    printf("a >> 1 = %d\n", right_shift);
}