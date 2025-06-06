#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(0));
    int x, y, z;

    if(argc != 4){
        printf("Erro\nDigite apenas 3 argumentos\n");
    }else{
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = atoi(argv[3]);
    }

    int numero_secreto = rand() %(y - x);

    printf("%d", numero_secreto);

}