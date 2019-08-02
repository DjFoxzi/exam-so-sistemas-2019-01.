# Pregunta 2 Examen 1 SO

Escriba un programa en C que tiene dos hilos y estos hilos van a ejecutar
 la siguiente operación matemática x*(z/y),
 donde x = 1250, y = 350 y z = 25; son variables privadas a cada hilo según corresponda. 
El programa tendrá una variable (global) o común a todos los hilos que será la variable v.
 ¿Cómo llevarán a cabo la operación matemática? El hilo 1 ejecutará la función sleep(2),
 luego hará la operación de división z/y  y guardará el resultado en la variable v.
 El hilo 2 llevará a cabo la operación de x*v y guardará el resultado en v.
 En la función main() imprimirá el valor de v.

El programa se llama matematica.c para compilarlo se utiliza el siguiente comando: 
```
gcc -pthread matematica.c -o mate
```
Para ejecutarlo se utiliza: 

```
./mate
```
