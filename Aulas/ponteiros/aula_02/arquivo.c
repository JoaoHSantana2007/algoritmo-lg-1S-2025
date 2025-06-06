#include <stdio.h>

// stdout -> Saidad e arquivo padrao

/*
    MODOS DE ABERTURA DE ARQUIVOS
    'r' -> para leitura
    'w' -> criar/sobrescrever e escrever arquivo
    'a' -> criar, se nao existir, e adicionar ao final da leitura
*/

int main(){

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(sexta, "Ola, mundo!\n");

    return 0;
}