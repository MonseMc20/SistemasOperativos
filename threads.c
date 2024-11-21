#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){ //esta funcion recibe solo referecnias
    int hid = *((int *)arg); //para poder llegar de * a int 
    printf("hola desde el hilo %d\n", hid);
    pthread_exit(NULL);
}

int main(){
    int NUM_THREADS= 20;
    pthread_t threadStatus[NUM_THREADS];
    int hids[NUM_THREADS];
    for (int i=0; i<NUM_THREADS; i++){
        hids[i]=i;
        pthread_create(&threadStatus[i], NULL, printHello, (void *)&hids[i]); //& es para pasar el i como dirección
    }
    pthread_exit(NULL); //esta línea espera a que se ejecuten todos los hilos y se acaba el programa
    printf("Hola de el main\n"); //esta linea no se ejecuta porque ya se termino el programa
}

//La impresion que se hace con el int (que muchos numeros se repiten) es porque el momento de ejecucion del hilo es mas lento que la cuenta del for
//for (int i=0; i<NUM_THREADS; i++){
//     pthread_create(&threadStatus[i], NULL, printHello, (void *)&i); //& es para pasar el i como dirección
//   }