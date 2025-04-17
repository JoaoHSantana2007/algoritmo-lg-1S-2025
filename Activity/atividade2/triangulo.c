#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    printf("triangulo.c\n");

    //Digite o valaorda altura e da base do triangulo

        float H;

            printf("\n");
            printf("Digite o valor da altura: ");
            scanf("%f", &H);
        
        float B;

            printf("Digite o valor da base: ");
            scanf("%f", &B);
    //computador entende o valor da base e da altuar do tringulo

        printf("\n");
        printf("O valor da altura he:%f", H);

        printf("\n");
        printf("O valor da base he:%f", B);
    //calculo da área

        printf("\n");

        float area;
        area = (H * B) / 2 ;

            printf("\n");
            printf("O valor da area he:%f", area);
    
    return 0;

}