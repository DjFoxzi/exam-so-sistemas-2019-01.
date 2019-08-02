#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "mycommon.h"
#include "common_threads.h"
#include <time.h>
puerta acceso;
volatile int counter = 0; 
int loops;
clock_t tiempoinicio, tiempofinal,total_t;





void *worker(void *arg) {
    int i;
    for (i = 0; i < loops; i++) {
    cerrar_puerta(acceso);
	counter++;
    abrir_puerta(acceso);

    }
    return NULL;
}


int main(int argc, char *argv[]) {
tiempoinicio= clock();
    if (argc != 2) { 
	fprintf(stderr, "usage: threads <loops>\n"); 
	exit(1); 
    }
    loops = atoi(argv[1]);
    pthread_t p1, p2;
    crear_puerta(acceso); 
    printf("Initial value : %d\n", counter);
    pthread_create(&p1, NULL, worker, NULL); 
    pthread_create(&p2, NULL, worker, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    printf("Final value   : %d\n", counter);
    destruir_puerta(acceso);
    tiempofinal = clock();
   total_t = (double)(tiempofinal - tiempoinicio);
    printf("%ld clocks \n",total_t);
    return 0;
}
