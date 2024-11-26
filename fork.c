#include <unistd.h>
#include <stdio.h>

//este codigo sirve para simular lo que pasa en nuestra memoria de la compu

int main (){
    int a = 20;
    int pid = fork();
    
    if (pid==0){
        printf("Soy el proceso hijo a=%d\n",a);
        //esta funcion duerme el proceso por el tiempo que le estoy pidiendo
        sleep(20);
        return 0;
    }
    printf("Soy el proceso padre a=%d\n",a);
    printf("mi hijo es pid=%d\n",pid);
    sleep(20);

    return 0;
}