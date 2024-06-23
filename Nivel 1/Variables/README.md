<h1> Variables </h1>

<h3> Introducción </h3>

Una variable es como una cajita etiquetada en la que guardamos **datos**. Gracias a ellas podemos manipular entradas, salidas, operaciones, etc. A continuación, aprenderemos sobre las variables en el lenguaje C.

<hr>

<h3> Tipos de datos </h3>

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

<h3> Declaración de variables </h3>

La sintáxis para declarar una variable es la siguiente:

`tipo` `identificador;` 
alternativamente, podemos declarar una variable con valor inicial así:

`tipo` `identificador` `=` `valor inicial;`

`tipo:` Hace referencia a un tipo de dato, puede ser de los anteriores (excepto void) o algunos más complejos que veremos más adelante en el curso.

`identificador:` Es el nombre que le damos a la variable, puede ser el que nosotros queramos siempre y cuando se componga **únicamente** por **letras del alfabeto inglés**, **números** y **guiones bajos**. Con él, nos refereriremos a la variable a lo largo del programa cuando necesitemos leer datos de ella o escribirlos.

A continuación, veamos algunos [ejemplos](https://github.com/DIRM2705/C-desde-0/blob/N1/Nivel%201/Variables/ejemplos.c) como se declaran variables de distintos tipos de datos:

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

**Nota:** Observa como los caracteres se escriben entre comillas simples `''`

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

<hr>

<h3> Modificadores de tipo </h3>

Existen **palabras clave** que al ponerlas antes de un tipo, modificarás su tamaño o si puede o no almacenar números enteros.

| **Modificador** |                                    **Cambio**                                    | **Aplica para los tipos** |
|:---------------:|:--------------------------------------------------------------------------------:|---------------------------|
| unsigned        | Evita guardar números negativos                                                  | char e int |
| short           | Cambia el tamaño de la variable a 2 bytes                                        | int                       |
| long            | Cambia el tamaño de la variable a 4 bytes si es tipo int o 16 bytes si es double | int, double               |
 
<hr>

<h3> Consejos al escribir variables </h3>

- Haz identificadores útiles que contesten la pregunta **¿Qué guarda?**.

- Evita usar claves o abreviaturas en los nombres. Eso dificulta la lectura.

Robert C. Martin en su libro "Clean Code", menciona que un programa debe poder leerse como una historia, sin esfuerzo.

Por [ejemplo](https://github.com/DIRM2705/C-desde-0/blob/N1/Nivel%201/Variables/temperatura.c), si vas a hacer una aplicación que mide la temperatura

:x: **No recomendado**

```C
float t;
```
En el código anterior, el identificador no nos dice mucho acerca de que guarda la variable, bien podría ser tiempo o una letra.

Esto hace nuestro programa difícil de leer y nos confundirémos fácilmente.

:white_check_mark: **Ideal**
```C
float temperatura;
```
Con esta variable, podemos facilmente saber que estamos guardando la temperatura en esta variable. No hay abreviaturas ni códigos extraños que explicar a las personas que se vayan agregando al proyecto en un futuro. Además al llamar la variable, podremos leer las instrucciones como si de un libro se tratase como en el siguiente ejemplo:

```C
if(temperatura >= 30) 
{
    printf("Hace calor");
}
```
<hr>

<h3> Ejercicio </h3>

Declara variables para guardar los siguientes datos, usa el tipo de datos que mejor funciona y sus modificadores. Podrás ver la respuesta [aquí](https://github.com/DIRM2705/C-desde-0/blob/N1/Nivel%201/Tipos%20de%20datos/ejercicios.c).

- -15
- Y
- 2.78
- 3.1416
- ,
- 100, 000, 000, 000
- 5.32456872681


[Siguiente lección>>](https://github.com/DIRM2705/C-desde-0/blob/N1/Nivel%201/Salida/README.md)