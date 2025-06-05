#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    if(argc < 3){
        printf("Argumentos invalidos");
        return 1;
    }
    
    if(strcmp(argv[1], "-maior") == 0){
        if(argc != 4){
        printf("Argumentos invalidos");
        return 1;
    }
        int x = atoi(argv[2]);
        int y = atoi(argv[3]);
        printf("%d", maior_2n(x,y));
    }
    if(strcmp(argv[1], "-primo") == 0){
        if(argc != 3){
        printf("Argumentos invalidos");
        return 1;
    }
        int x = atoi(argv[2]);
        printf("%d", verifiar_numero_primo(x));
    }

    return 0;
}