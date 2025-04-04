#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    char opcao;
    float r, D, d, L, b, h, B, A;

        printf("area.c\n");
        printf("escolha uma opçao: \n");
        printf("c - circulo\n");
        printf("l - losango\n");
        printf("q - quadrado\n");
        printf("r - retangulo\n");
        printf("z - trapezio\n");
        printf("t - triangulo\n");

    scanf("%c", &opcao);

    switch (opcao){

        case 'c':
            printf("c - circulo\n");
            break;
        
        case 'l':
            printf("l - losango\n");
            break;

        case 'q':
            printf("q - quadrado\n");
            break;
        
        case 'r':
            printf("r - retangulo\n");
            break;

        case 't':
            printf("t - triangulo\n");
            break;
        
        case 'z':
            printf("z - trapezio\n");
            break;

        default:
            printf("Opçao invalida");
            A = 0;
            break;
        
    }
    
    return 0;
}