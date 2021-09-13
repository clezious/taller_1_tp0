# Paso 0

### a) Capturas de pantalla de la ejecución del aplicativo
- Ejecución sin Valgrind: <br><br> 
  ![Ejecución sin Valgrind](img/paso_0/sin_valgrind.png)
- Ejecución con Valgrind: <br><br> 
  ![Ejecución con Valgrind](img/paso_0/con_valgrind.png)
### b) Valgrind
[Valgrind](https://www.valgrind.org) es un programa Open Source que contiene herramientas para debuggear y hacer análisis de rendimiento de un programa en c/c++.  
Es particularmente útil para detectar errores de memoria (con la herramienta memcheck).  
Entre las opciones más comunes se encuentran: `--tool`, con la que se elige entre las herramientas que ofrece el programa (Por defecto Memcheck), `--leak-check`, con la que se habilita o deshabilita el análisis detallado de las perdidas de memoria, y `--verbose` con la que se pide que el output contenga información más detallada que la que se ofrece por defecto. 
### c) sizeof()
`sizeof()` es una función que devuelve el tamaño en bytes de una variable o tipo de dato recibido como parámetro en la arquitectura y compilador utilizados.  
El valor de salida de `sizeof(char)` es 1 y el de `sizeof(int)` dependerá de la arquitectura y compilador utilizados (En mi caso, es de 4 bytes).
### d) sizeof(struct)
El *sizeof()* de un *struct* de c no es necesariamente igual a la suma de los *sizeof()* de cada uno de sus elementos. Esto se debe a que el compilador puede alinear los elementos en direcciones de memoria múltiplos de 4 para hacer que su acceso sea más rapido, a coste de utilizar más memoria.
Un ejemplo de este comportamiento se observa en el siguiente programa:
```c++
  #include <stdio.h>
  
  struct Ejemplo {
      int n;
      char a;
  };

  int main(void){
      struct Ejemplo ej = {1,'a'};
      int n = 1;
      char a = 'a';
      printf("sizeof() Struct: %ld\n",sizeof(ej));
      printf("sizeof() int + char : %ld\n",sizeof(n)+sizeof(a));
      return 0;
  }
```
cuya salida al ejecutarlo resulta:
```
  sizeof() struct: 8
  sizeof() int + char : 5
```
comprobando el comportamiento anteriormente dicho.
### e) Archivos estándar