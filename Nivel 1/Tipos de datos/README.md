<h1> Tipos de datos en C </h1>

Antes de empezar a programar, tenemos que entender lo que estamos por hacer.

<hr>

<h3> Introducción </h3>

La programación es la manera en que **manípulamos los datos** de una computadora.
Nuestros datos, pueden ser números, letras o incluso datos binarios. Cada uno con tendrá sus características distintas que debemos comprender si queremos aprovecharlos al máximo.

<hr>

<h3> ¿Cuáles son estas diferencias? </h3>

En el lenguaje C, denominamos 5 tipos de datos básicos. A estos tipos de datos los denominamos **PRIMITIVOS**.

Estos tipos de datos los identificaremos por las siguientes características:
- Tamaño en memoria
- Datos que guarda

El tamaño en memoria, se refiere a cuanto espacio de tu RAM ocupará tener un dato de "X" tipo. Mientras que los datos que guarda serán numéricos o alfanuméricos.

<h4 align="center"> ¡¿NUMÉRICOS O ALFAQUÉ?! </h4>
Vamos por pasos. Veamos la siguiente tabla primero:


<p align="center"> TIPOS DE DATOS PRIMITIVOS </p>

| **Nombre** | **Palabra clave** | **Dato que guarda** | **Tamaño en memoria** |
|:----------:|:-----------------:|:-------------------:|:---------------------:|
| Entero     |        int        |   Números enteros   | 2 o 4 bytes (depende del compilador)               |
| Flotante   |       float       |      Decimales      | 4 bytes               |
| Doble      |       double      |      Decimales      | 8 bytes               |
| Carácter   |        char       |   Números y letras  | 1 byte                |
| Vacío      |        void       |         Nada        | 1 byte                | 


<hr>

<h4> Enteros </h4>

Son números positivos o negativos que **NO** tienen decimales, como:
$$1, 2, 3...$$

<p align="center"> o </p>

$$ -1, -2, -3...$$

**Código de ejemplo:**
```C
int num = 5; //Guardamos un entero positivo
int num2 = -18; //Guardamos un entero positivo
```

<h4> Carácteres </h4>

En este tipo de variales guardarás **UNA** SOLA LETRA, NÚMERO O CARACTER [ASCII](https://elcodigoascii.com.ar/).

No se debe usar este tipo de datos si debes realizar operaciones con números.

**Código de ejemplo:**
```C
char num = '5'; //Guardamos un número
char letra = 'x'; //Guardamos una letra
char ascii = '?'; //Guardamos un caracter ASCII
```

<h4> Decimales </h4>

Para datos decimales tenemos dos opciones, los **flotantes** y los **dobles**

Ambos pueden guardar cualquier número sea positivo o negativo, tenga o no números decimales. Entonces...

<p align="center">
<b> ¿Cuál es la diferencia? </b>
</p>

La precisión.

Usualmente se utilizan los **flotantes** cuando no necesitas más de dos decimales o si no importa mucho que las cifras después del punto cambien un poquito.

Si necesitas presición o hasta 4 decimales, utiliza los **dobles**

**Código de ejemplo:**
```C
float num = 2.5; //Guardamos un flotante, menos precisión
double num2 = 1.3679; //Guardamos un doble, mayor precisión
```

<h4> Vacío </h4>

Este tipo de dato le indica a la computadora que no tienes **nada**. ¿Extraño no?

Solo se usa este tipo de dato en condiciones muy específicas que conoceremos más adelante.

<hr>

<h3> Modificadores de tipo </h3>

Existen **palabras clave** que al ponerlas antes de un tipo, modificarás su tamaño o si puede o no almacenar números enteros.

| **Modificador** |                                    **Cambio**                                    | **Aplica para los tipos** |
|:---------------:|:--------------------------------------------------------------------------------:|---------------------------|
| unsigned        | Evita guardar números negativos                                                  | char e int |
| short           | Cambia el tamaño de la variable a 2 bytes                                        | int                       |
| long            | Cambia el tamaño de la variable a 4 bytes si es tipo int o 16 bytes si es double | int, double               |
 
<hr>

<h3> Ejercicio </h3>
Veamos si entendiste los tipos de datos.
Encuentra el tipo que mejor funciona para cada uno de los siguientes datos, podrás ver la respuesta (aquí)[]:

- -15
- Y
- 2.78
- 3.1416
- ,
- 100, 000, 000, 000
- 5.32456872681
