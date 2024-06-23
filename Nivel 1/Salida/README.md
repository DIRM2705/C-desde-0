<h1> Salida de la consola </h1>

<h3> Introducción </h3>

Una herramienta que tenemos para observar los cambios que nuestro programa está realizando es la **consola**.

C tiene código pre-escrito que nos permite acceder a la consola fácilmente. La llamamos stdio.
Para usarla, es necesario escribir lo siguiente al inicio de nuestro archivo **.c**

```C
#include <stdio.h>
```

Esta librería tiene varias funciones que veremos a lo largo del curso. Para esta lección nos centraremos en la función `printf()`

<hr>

<h4> Función printf </h4>

<h5> Utilidad </h5>

Esta función nos permite escribir en pantalla texto y datos internos de nuestro programa por medio del **formato de cadenas**.

<h5> Sintáxis </h5>

`printf(cadena, arg1, arg2, ...);`

<h5> Parámetros </h5>

`cadena` Es el texto que queremos mostrar en la pantalla de la consola.

La cadena puede contener **códigos de formato** estos son combinaciones de caracteres especiales, que le indican a la función que debe imprimir uno de los argumentos que se pasarán después, estos cambian según el tipo de dato que se quiere imprimir.

<p align="center"> CÓDIGOS DE FORMATO DE LOS TIPOS PRIMITIVOS </p>

| **Tipo de dato** |            **Código de formato**           |
|:----------------:|:------------------------------------------:|
| int              | %d                                         |
| float            | %f o %.2f para escribir solo dos decimales |
| double           | %lf o %.4lf para escribir solo 4 decimales |
| char             | %c                                         |

`arg` Es el dato que queremos imprimir usando los códigos de formato.

Estos datos no son parámetros obligatorios. Es decir, podemos usar la función `printf();` sin utilizar ningún dato a imprimir. Asimismo, podemos usart todos los datos que necesitamos recordando ponerlos en **orden**

[Ejemplos:](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Salida/ejemplos.c)
```C
//Imprimir sin datos
printf("Hello world!");

//Imprimir un entero
printf("2 + 2 = %d", 4);

//Imprimir un decimal de 2 cifras
printf("5/2 = %.2f", 2.5);

//Imprimir un decimal de 4 cifras
printf("0.23 * 0.15 = %.4lf", 0.0345);

//Imprimir un carácter
printf("Después de la A sigue la %c", 'B');

//Imprimir varios datos
printf("%d, %.2f y %c son tres números de menor a mayor", -16, 3.14, '8');
```

Notemos tres cosas en los ejemplos.

1. Las cadenas siempre van en **comillas dobles**
2. Los argumentos van en **orden** además, deben coincidir con el tipo de dato al que corresponde el **código de formato**
3. Se coloca un ";" al final de la línea. Esto **SIEMPRE** debe hacerse con prácticamente todas las lineas del código sin importar que función o funciones incluyan, lo verémos a lo largo del curso.

Por lo tanto, los siguientes son [errores:](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Salida/errores.c)
```C
//Faltan comillas
printf(Hola mundo);

//Falta punto y coma
printf("2 + 2 = %d", 4)

//No coinciden los tipos de dato
printf("1 + 1 = %c", 2);

//Hay demasiados datos
printf("3 + 9 = %d", 1, 2);

//No hay suficientes datos
printf("%d, %.2f y %c son tres números", -16, 5);
```
<hr>

<h3> Ejercicio </h3>
Crea tres instrucciones para imprimir en pantalla:

La primera deberá decir "Programando en C", la segunda contendrá una suma (deberás usar códigos de formato para el resultado) y la última una lista de tres letras que conformen tu nombre (usa códigos de formato).

Puedes una posible solución [aquí](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Salida/ejercicios.c).