#include <stdio.h> 

//argc cantidad de elementos del arreglo
//argv arreglo
int main(int argc, char **argv){
    //cadena de formato
    printf("Hola %s\n",argv[2]); // \n es para hacer una nueva linea
    //los ; son obligatorios en C
    return 0;
}