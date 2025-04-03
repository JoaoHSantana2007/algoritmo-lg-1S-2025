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
        
            printf("circulo.c\n");

        //Digite o raio do circulo 

            float r; 

                printf("\n");
                printf("Digite o raio do circulo: ");
                scanf("%f", &r);

        //Computador entende o valor do raio  do circulo

            printf("\n");
            printf("O valor do raio he: %f", r);

        //Calculo da área 
            printf("\n");

            float area;
            area = M_PI * pow(r,2);

                printf("\n");
                printf("O valor da area he: %f", area);
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