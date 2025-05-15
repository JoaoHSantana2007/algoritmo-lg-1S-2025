#include <stdio.h>

int main(int argc, char *argv){

    int numero, resultado;

    printf("Digite o numero que deseja saber se eh primo: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        resultado = numero % i;
            if(resultado == 0){
                printf("O numero %d eh primo!", numero);
            }else{
                printf("O numero %d nao eh preimo", numero);
            }
    }
    return 0;
}