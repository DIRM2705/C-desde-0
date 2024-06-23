#include <stdio.h>

void main()
{
    // Usamos int para guardar enteros
    int num = -15;
    short int num = -15; // ¡También es correcto!

    // Usamos char para guardar datos alfanuméricos
    char letra = 'Y';
    // ¡También es correcto! Ya que la letra Y representa el número 89 en ASCII
    unsigned char letra = 'Y';

    // Usamos float para decimales de poca precisión
    float e = 2.78;

    // Usamos double para decimales de mayor precisión
    double pi = 3.1416;

    // Usamos char para guardar carácteres ASCII
    char ascii = ',';

    // Necesitamos el modificador long para números grandes
    long int numg = 100000000000;
    long double decg = 5.32456872681;
}
