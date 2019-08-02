#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "mycommon.h"
#include "common_threads.h"

puerta acceso;
volatile float v = 1;
void *worker1(void *arg) {
    float z= 25;
    float y= 350;
    cerrar_puerta(acceso);
	sleep(2);
	v = (z/y);
    abrir_puerta(acceso);

    
    return NULL;
}

void *worker2(void *arg) {
    float x = 1250;
    cerrar_puerta(acceso);
        v = (x*v);
    abrir_puerta(acceso);

    
    return NULL;
}

int main(int argc, char *argv[]) {
pthread_t p1, p2;
crear_puerta(acceso);
pthread_create(&p1, NULL, worker1, NULL); 
pthread_create(&p2, NULL, worker2, NULL);
pthread_join(p1, NULL);
pthread_join(p2, NULL);
printf("el valor de v es: %f\n",v);
destruir_puerta(acceso);
return 0;
} 
