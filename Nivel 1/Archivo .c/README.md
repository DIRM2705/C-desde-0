<h1> Archivos .c </h1>

<h3> Introducción </h3>

Para programar en lenguaje C, hay cosas básicas que todos nuestros programas deben tener. En esta lección, verás lo que conforma un archivo C básico.

<hr>

<h3> Librerías </h3>

Una librería es código pre-fabricado que nos sirve para simplificar muchas de nuestras tareas como programadores. A lo largo del curso, conoceremos varias de ellas utilizadas comúnmente en el lenguaje C.

Siempre debemos incluir las librerías al inicio de nuestro archivo.

Hay dos tipos de librería, las instaladas en el compilador y las incluidas en alguno de nuestras carpetas.

Para llamar una librería una librería instalada usaremos la siguiente linea:

```C
#include <librería.h>
```

Mientras que para librerías de nuestras carpetas usaremos:

```C
#include "ruta/librería"
```

Aprenderemos más de este segundo tipo de librerías en los niveles más altos del curso.

<h3> Función main </h3>

La función main, es la más importante del lenguaje C. Sin esta, nuestro código no funcionará. Es la función principal, dentro de ella se ejecutará **TODO** nuestro programa.

Se define:

```C
void main()
{
    //Nuestro código va aquí
}
```
Aprenderemos más acerca de funciones posteriormente en el curso.

<hr>

<h3> Plantilla de archivo .c principal </h3>

Con la siguiente [plantilla]() podremos empezar a programar en C de inmediato. Te recomiendo descargarla :)

```C
#include <stdio.h>

void main()
{
    //Nuestro código va aquí
}
```