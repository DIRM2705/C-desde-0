<h1> Operadores </h1>

<h3> Introducción </h3>

Los distintos tipos de datos, tienen diferentes formas de relacionarse entre sí a las que llamamos operaciones. Cómo en matemáticas, operar dos valores nos genera un nuevo resultado. A continuación aprenderemos las distintas operaciones que podemos hacer en el lenguaje C.

<hr>

<h3> Operadores aritméticos </h3>

Son operadores que nos permiten hacer operaciones matemáticas.

| **Operador** |    **Nombre**   |                              **Descripción**                             |                 **Ejemplo**                |
|:------------:|:---------------:|:------------------------------------------------------------------------:|:------------------------------------------:|
|       +      | Suma            | Suma dos operandos                                                       | `int suma = 2 + 2;`      |
|       -      | Resta           | Substrae el segundo valor del primero                                    | `float resta = 3.2 - 5;` |
|       *      | Multiplicación  | Multiplica dos valores                                                   | `double mult = 5.05*4.93`|
|       /      | División        | Divide dos números                                                       | `float division = 1/3;`  |
|       %      | Módulo          | Obtiene el residuo de la división de dos números                         | `int mod = 5%2;`         |
|      ++      | Incremento      | Incrementa en uno la variable                                            | `contador++;`            |
|      --      | Decremento      | Decrementa en uno la variable                                            | `acumulador--;`          |

[Ver código de ejemplo](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/aritmeticos.c)

<hr>

<h3> Operadores de comparación </h3>
Con estos operadores, establecemos relaciones entre dos números.

| **Operador** |     **Nombre**    |                       **Descripción**                      |            **Ejemplo**           |
|:------------:|:-----------------:|:----------------------------------------------------------:|:--------------------------------:|
|      ==      | Igual que         | Revisa si dos números son iguales                          | `short int iguales = 3==5;`      |
|      !=      | Distinto que      | Revisa si dos números son distintos                        | `short int diferentes = 4 != 4;` |
|      >=      | Mayor o igual que | Revisa si el primer número es mayor o igual que el segundo | `short int mayor_igual = 3 >= 2;`|
|      <=      | Menor o igual que | Revisa si el primer número es menor o igual que el segundo | `short int menor_igual = 9 <= 5;`|
|      >       | Mayor que         | Revisa si el primer número es mayor que el segundo         | `short int mayor = 6 > 1;`       |
|      <        | Menor que         | Revisa si el primer número es menor que el segundo         | `short int menor = 1 < 2;`      |

[Ver código de ejemplo](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/comparacion.c)

<hr>

<h3> Operadores lógicos </h3>

Estos operadores nos permiten comparar si dos valores son nulos (es decir equivalen a cero) y nos dan un resultado binario que puede ser verdadero (1) o falso (0)

| **Operador** |                                       **Descripción**                                       |          **Ejemplo**          |
|:------------:|:-------------------------------------------------------------------------------------------:|:-----------------------------:|
|   &&  | El operador de conjunción (AND) te devuelve un 1 si ambos operandos son distintos de 0      | `short int no_cero = 5 && 3;`   |
|     \|\|     | El operador de disyunción (OR) te devuelve un 1 si alguno de los operandos es distinto de 0 | `short int un_cero = 6 \|\| 0;` |
|       !      | El operador de negación (NOT) te devuelve un 1 si el operador es 0                          | `short int opuesto = !a;`       |

[Ver código de ejemplo]()

<hr>

<h3> Operadores de bits </h3>

Tomando el valor en números binarios, estos operadores trabajan bit a bit realizando las operaciones que se mencionan. Tomemos en cuenta los siguietnes valores para los ejemplos:

```C
    int a = 5; //Equivale a 105 en binario
    int b = 3; //Equivale a 011 en binario
```

| **Operador** |                                                                **Descripción**                                                                |               **Ejemplo**              |
|:------------:|:---------------------------------------------------------------------------------------------------------------------------------------------:|:--------------------------------------:|
|     &   | Disyunción, copia los bits solo si ambos son 1                                                                                                | `short int and = a & b;`   |
|      \|      | Conjunción, copia los bits si alguno es 1                                                                                                     | `short int or = a \| b;`               |
|       ^      | XOR, copia los bits si uno y solamente uno es 1                                                                                               | `short int xor = a ^ b;`               |
|       ~      | Negación, copia los bits con su valor opuesto además cambia el signo del número                                                                                                 | `short int not = ~a;`                  |
|       <<       | Desplazamiento a la izquierda, mueve hacia la izquierda los bits del operando izquierdo, el número de veces indicados por el operando derecho | `short int leftShift = b << 2;` |
|       >>      | Desplazamiento a la derecha, mueve hacia la derecha los bits del operando izquierdo, el número de veces indicados por el operando izquierdo.    | `short int rightShift = 3 >> a;`       |

Veamos como quedarían nuestros valores:
```C
    short int and = a & b; //Resultado: 1
    //   101
    // & 011  
    //-------
    //   001

    short int or = a | b; //Resultado: 7
    //   101
    // | 011
    // ------
    //   111

    short int xor = a ^ b; //Resultado: 6
    //   101
    // ^ 011
    // -------
    //   110

    short int not = ~a; //Resultado: 2
    //  ~101
    // -------
    //   010

    short int left_shift = b << 2; //Resultado: 12
    //   011 << 2
    // -------
    //   1100

    short int right_shift = a >> 1; //Resultado: 2
    //   101 >> 1
    // -------
    //   010    
```


[Ver código de ejemplo](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/bits.c)

<hr>

<h3> Operadores de asignación </h3>
Es con estos operadores que podemos asignar valores a las variables o modificar el valor interno que puedan tener.

| **Operador** | **Equivalente a:**           |
|:------------:|:----------------------------:|
| =            | `int variable = 2;`          |
| +=           | `variable = variable + 2;`         |
| -=           | `variable = variable - 2;`         |
| *=           | `variable = variable * 2;`       |
| /=           | `variable = variable / 2;`         |
| %=           | `variable = variable % 2;`         |
| <<=          | `variable = variable << 2` |
| >>=          | `variable = variable >> 2` |
| &=           | `variable = variable & 2;`         |
| \|=          | `variable = variable \| 2;`          |
| ^=           | `variable = variable ^ 2;`         |

[Ver código de ejemplo](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/asignacion.c)

<hr>

<h3> Jerarquía de operadores </h3>

La jerarquía de operadores determina como se agrupan los términos cuando evaluamos una expresión. En general, se leerá una expresión de izquierda a derecha buscando los operadores más altos en la tabla. Por [ejemplo](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/jerarquia.c), en la siguiente operación

```C
float valor = (25+6)*5+6 > 16-2/4 & 1; 
```
primero se ejecutarían los paréntesis, luego multiplicaciones y divisiones, a continuación sumas y restas seguidos por la compración y el operador binario. Entonces en realidad estaríamos realizando las siguientes operaciones:

```C
/*
    (25+6) = 11
    11*5 = 55
    55+6 = 61

    2/4 = 0.5
    16-0.5 = 15.5

    61 > 15.15 = 1

    1 & 1 = 1
*/

float valor = (25+6)*5+6 > 16-2/4 & 1; //Será equivalente a 1
```



La siguiente es la tabla de jerarquía para el lenguaje C. Entre más alto está un operador en la tabla, antes se realizará la operación.

|  **Jeararquía de operadores** |
|:---------------:|
|        ()       |
| !, ~, ++, --, - |
| *, /, %         |
| +, -            |
| <<, >>          |
| <, <=, >=, >    |
| ==, !=          |
| &               |
| \|              |
| &&              |
| \|\|            |


Después de todos los operadores anteriores y por ende al final de la jererquía se encuentran los [operadores de asignación](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/README.md#-operadores-de-asignaci%C3%B3n-). Con la particulraridad de que estos operadores se evaluan de derecha a izquierda.

<hr>

<h3> Ejercicios </h3>

Obtén el resultado de las siguientes expresiones, puedes ver la respuesta [aquí](https://github.com/DIRM2705/C-desde-0/blob/main/Nivel%201/Operadores/ejercicio.c)

- 6*2/( 2+1 * 2/3 +6) +8 * (8/4)
- (17/2)-2/3+6%2 == 0
- !(5 > 10) && ( 2 == 2 )
- 8 | 3+5%3 & 7 >= 1

Siguiente lección >>