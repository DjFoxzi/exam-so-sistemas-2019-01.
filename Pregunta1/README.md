# Pregunta 1 Examen 1 SO
Medir el tiempo de ejecutar el programa threads.c  que usted entregó en la tarea propuesta para cada uno de los siguientes escenarios:
Cerrar la puerta antes del ciclo for donde se incrementa la variable compartida y abrir la puerta una vez finalizado este ciclo for.
Ubicado dentro del ciclo for, cerrar la puerta justo antes de incrementar la variable compartida y abrir la puerta justo después de haberla incrementado.

 Para compilar `threads.c`:

```
gcc -pthread threads.c -o threads
```

 Para ejecutar `threads.c`

```
./threads.c
```

Muestre los tiempos observados indicando el argumento de entrada que usó para la medición de los tiempos.
Tiempos de Puertas antes y despues del ciclo for para un argumento de 100:

163 clocks

167 clocks

170 clocks

Tiempos de las Puertas dentro del ciclo for para un argumento de 100:

171 clocks

172 clocks

173 clocks
 
Por favor dé una explicación de los tiempos observados, 
es decir, porque cree que un programa se demoró más que el otro.
 Ejecute cada versión del programa 5 veces y elimine el tiempo más alto y el más bajo observado.

Se demora mas cerrando y abriendo las puertas dentro del for ya que estas le suman una pequeña 
carga(operaciones) mas al programa y como el argumento es pequeño el tiempo de espera que tendria el otro 
hilo para esperar que la variable sea liberada si efectuaran las puertas fuera del for es muy pequeño.

