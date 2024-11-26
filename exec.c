#include <unistd.h>
#include <stdio.h>

int main (){
    int pid=fork();
    //esto es lo que va a ejecutar el proceso HIJO
    if (pid == 0){
        printf("soy el hijo\n");
        //se debe pasar la ruta
        //./ hace referencia en la carpeta actual o directorio busca hola
        //execl cambia el código actual al que tenemos en hola
        //si se ejecuta correctamente se sobreescribe todo después de ese comando
        execl("./hola","hola","pedro","luis","mary",(char * )NULL);
        printf("ESTA LINEA NO DEBE EJECUTARSE");
    }
    //esto es lo que va a ejecutar el proceso PADRE, por eso sí lo imprime
    printf("soy el proceso padre\n");
    return 0;

}